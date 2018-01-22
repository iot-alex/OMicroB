#ifdef __AVR__
#include <avr/io.h>
#include <util/delay.h>
#endif

#include <setjmp.h>
#include <string.h>

#include "values.h"
#include "gc.h"
#include "fail.h"

/******************************************************************************/

jmp_buf caml_exception_jmp_buf;

void caml_raise(value v) {
  acc = v;
  longjmp(caml_exception_jmp_buf, 1);
}

/******************************************************************************/

void caml_raise_out_of_memory(void) {
  caml_raise(ocaml_out_of_memory);
}

void caml_raise_stack_overflow(void) {
  caml_raise(ocaml_stack_overflow);
}

void caml_raise_division_by_zero(void) {
  caml_raise(ocaml_division_by_zero);
}

/******************************************************************************/

void caml_raise_invalid_argument(char const *msg) {
  mlsize_t msg_len = strlen(msg);
  value block;
  mlsize_t str_wosize = Wsize_bsize(msg_len) + 1;
  mlsize_t str_bosize = Bsize_wsize(str_wosize);
  OCamlAlloc(block, str_wosize + 3, String_tag);
  if (block == 0) {
    caml_raise_out_of_memory();
  } else {
    Hd_val(block) = Make_header(str_wosize, String_tag, Color_white);
    Field(block, str_wosize - 1) = 0;
    memcpy(String_val(block), msg, msg_len);
    String_val(block)[str_bosize - 1] = str_bosize - msg_len - 1;
    Field(block, str_wosize) = Make_header(2, 0, Color_white);
    Field(block, str_wosize + 1) = ocaml_invalid_argument;
    Field(block, str_wosize + 2) = block;
    caml_raise(Val_block(&Field(block, str_wosize + 1)));
  }
}

/******************************************************************************/
