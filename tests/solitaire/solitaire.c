#define OCAML_STACK_WOSIZE             64
#define OCAML_HEAP_WOSIZE              64
#define OCAML_HEAP_INITIAL_WOSIZE      36
#define OCAML_STACK_INITIAL_WOSIZE      0
#define OCAML_GLOBDATA_NUMBER           9
#define OCAML_BYTECODE_BSIZE          246
#define OCAML_PRIMITIVE_NUMBER          7
#define OCAML_VIRTUAL_ARCH             32

#include </Users/steven/github/OMicroB/src/byterun/values.h>

#define OCAML_ACC0                      0
#define OCAML_ACC1                      1
#define OCAML_ACC2                      2
#define OCAML_ACC4                      3
#define OCAML_PUSH                      4
#define OCAML_PUSHACC1                  5
#define OCAML_PUSHACC2                  6
#define OCAML_PUSHACC3                  7
#define OCAML_PUSHACC4                  8
#define OCAML_PUSHACC5                  9
#define OCAML_PUSHACC6                 10
#define OCAML_POP                      11
#define OCAML_ASSIGN                   12
#define OCAML_APPLY1                   13
#define OCAML_APPLY3                   14
#define OCAML_RETURN                   15
#define OCAML_RESTART                  16
#define OCAML_GRAB                     17
#define OCAML_CLOSURE_1B               18
#define OCAML_CLOSURE_2B               19
#define OCAML_GETGLOBAL_1B             20
#define OCAML_PUSHGETGLOBAL_1B         21
#define OCAML_SETGLOBAL_1B             22
#define OCAML_MAKEBLOCK_1B             23
#define OCAML_BRANCH_1B                24
#define OCAML_BRANCH_2B                25
#define OCAML_BRANCHIF_1B              26
#define OCAML_BRANCHIFNOT_1B           27
#define OCAML_CHECK_SIGNALS            28
#define OCAML_C_CALL1                  29
#define OCAML_C_CALL2                  30
#define OCAML_C_CALL3                  31
#define OCAML_CONST0                   32
#define OCAML_CONST1                   33
#define OCAML_PUSHCONST0               34
#define OCAML_PUSHCONSTINT_1B          35
#define OCAML_PUSHCONSTINT_2B          36
#define OCAML_NEQ                      37
#define OCAML_GTINT                    38
#define OCAML_OFFSETINT_1B             39
#define OCAML_STOP                     40

val_t ocaml_heap[OCAML_HEAP_WOSIZE * 2] = {
  /*  0 */  Make_header(5, 0),
  /*  1 */  Val_int(0),
  /*  2 */  Val_int(0),
  /*  3 */  Val_int(0),
  /*  4 */  Val_int(0),
  /*  5 */  Val_int(0),
  /*  6 */  Make_header(1, String_tag),
  /*  7 */  Make_string_data(0x0A, '\0', '\0', '\2'),
  /*  8 */  Make_header(1, String_tag),
  /*  9 */  Make_string_data('o', '\0', '\0', '\2'),
  /* 10 */  Make_header(1, String_tag),
  /* 11 */  Make_string_data('x', '\0', '\0', '\2'),
  /* 12 */  Make_header(5, 0),
  /* 13 */  Val_int(0),
  /* 14 */  Val_int(0),
  /* 15 */  Val_int(0),
  /* 16 */  Val_int(0),
  /* 17 */  Val_int(0),
  /* 18 */  Make_header(5, 0),
  /* 19 */  Val_int(0),
  /* 20 */  Val_int(0),
  /* 21 */  Val_int(1),
  /* 22 */  Val_int(0),
  /* 23 */  Val_int(0),
  /* 24 */  Make_header(5, 0),
  /* 25 */  Val_int(0),
  /* 26 */  Val_int(0),
  /* 27 */  Val_int(0),
  /* 28 */  Val_int(0),
  /* 29 */  Val_int(0),
  /* 30 */  Make_header(5, 0),
  /* 31 */  Val_int(0),
  /* 32 */  Val_int(0),
  /* 33 */  Val_int(0),
  /* 34 */  Val_int(0),
  /* 35 */  Val_int(0)
};

const val_t* ocaml_heap1 = ocaml_heap;
const val_t* ocaml_heap2 = ocaml_heap + OCAML_HEAP_WOSIZE;

val_t acc = Init_val_block(4 * 1);

val_t ocaml_stack[OCAML_STACK_WOSIZE] = {
  /*  0 */  Val_int(0),
  /*  1 */  Val_int(0),
  /*  2 */  Val_int(0),
  /*  3 */  Val_int(0),
  /*  4 */  Val_int(0),
  /*  5 */  Val_int(0),
  /*  6 */  Val_int(0),
  /*  7 */  Val_int(0),
  /*  8 */  Val_int(0),
  /*  9 */  Val_int(0),
  /* 10 */  Val_int(0),
  /* 11 */  Val_int(0),
  /* 12 */  Val_int(0),
  /* 13 */  Val_int(0),
  /* 14 */  Val_int(0),
  /* 15 */  Val_int(0),
  /* 16 */  Val_int(0),
  /* 17 */  Val_int(0),
  /* 18 */  Val_int(0),
  /* 19 */  Val_int(0),
  /* 20 */  Val_int(0),
  /* 21 */  Val_int(0),
  /* 22 */  Val_int(0),
  /* 23 */  Val_int(0),
  /* 24 */  Val_int(0),
  /* 25 */  Val_int(0),
  /* 26 */  Val_int(0),
  /* 27 */  Val_int(0),
  /* 28 */  Val_int(0),
  /* 29 */  Val_int(0),
  /* 30 */  Val_int(0),
  /* 31 */  Val_int(0),
  /* 32 */  Val_int(0),
  /* 33 */  Val_int(0),
  /* 34 */  Val_int(0),
  /* 35 */  Val_int(0),
  /* 36 */  Val_int(0),
  /* 37 */  Val_int(0),
  /* 38 */  Val_int(0),
  /* 39 */  Val_int(0),
  /* 40 */  Val_int(0),
  /* 41 */  Val_int(0),
  /* 42 */  Val_int(0),
  /* 43 */  Val_int(0),
  /* 44 */  Val_int(0),
  /* 45 */  Val_int(0),
  /* 46 */  Val_int(0),
  /* 47 */  Val_int(0),
  /* 48 */  Val_int(0),
  /* 49 */  Val_int(0),
  /* 50 */  Val_int(0),
  /* 51 */  Val_int(0),
  /* 52 */  Val_int(0),
  /* 53 */  Val_int(0),
  /* 54 */  Val_int(0),
  /* 55 */  Val_int(0),
  /* 56 */  Val_int(0),
  /* 57 */  Val_int(0),
  /* 58 */  Val_int(0),
  /* 59 */  Val_int(0),
  /* 60 */  Val_int(0),
  /* 61 */  Val_int(0),
  /* 62 */  Val_int(0),
  /* 63 */  Val_int(0)
};

val_t ocaml_global_data[OCAML_GLOBDATA_NUMBER] = {
  /* 0 */  Val_int(0),
  /* 1 */  Init_val_block(4 * 7),
  /* 2 */  Val_int(0),
  /* 3 */  Init_val_block(4 * 9),
  /* 4 */  Init_val_block(4 * 11),
  /* 5 */  Init_val_block(4 * 13),
  /* 6 */  Init_val_block(4 * 19),
  /* 7 */  Init_val_block(4 * 25),
  /* 8 */  Init_val_block(4 * 31)
};

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B,
  /*   1 */  0,
  /*   2 */  159,
  /*   3 */  OCAML_CONST0,
  /*   4 */  OCAML_PUSHCONSTINT_1B,
  /*   5 */  4,
  /*   6 */  OCAML_PUSH,
  /*   7 */  OCAML_PUSHACC2,
  /*   8 */  OCAML_GTINT,
  /*   9 */  OCAML_BRANCHIF_1B,
  /*  10 */  49,
  /*  11 */  OCAML_CHECK_SIGNALS,
  /*  12 */  OCAML_CONST0,
  /*  13 */  OCAML_PUSHCONSTINT_1B,
  /*  14 */  4,
  /*  15 */  OCAML_PUSH,
  /*  16 */  OCAML_PUSHACC2,
  /*  17 */  OCAML_GTINT,
  /*  18 */  OCAML_BRANCHIF_1B,
  /*  19 */  23,
  /*  20 */  OCAML_CHECK_SIGNALS,
  /*  21 */  OCAML_ACC1,
  /*  22 */  OCAML_PUSHACC4,
  /*  23 */  OCAML_PUSHACC6,
  /*  24 */  OCAML_C_CALL2,
  /*  25 */  0,
  /*  26 */  OCAML_C_CALL2,
  /*  27 */  0,
  /*  28 */  OCAML_PUSHGETGLOBAL_1B,
  /*  29 */  0,
  /*  30 */  OCAML_APPLY1,
  /*  31 */  OCAML_ACC1,
  /*  32 */  OCAML_PUSH,
  /*  33 */  OCAML_OFFSETINT_1B,
  /*  34 */  1,
  /*  35 */  OCAML_ASSIGN,
  /*  36 */  2,
  /*  37 */  OCAML_ACC1,
  /*  38 */  OCAML_NEQ,
  /*  39 */  OCAML_BRANCHIF_1B,
  /*  40 */  -19,
  /*  41 */  OCAML_CONST0,
  /*  42 */  OCAML_POP,
  /*  43 */  2,
  /*  44 */  OCAML_GETGLOBAL_1B,
  /*  45 */  1,
  /*  46 */  OCAML_C_CALL1,
  /*  47 */  1,
  /*  48 */  OCAML_ACC1,
  /*  49 */  OCAML_PUSH,
  /*  50 */  OCAML_OFFSETINT_1B,
  /*  51 */  1,
  /*  52 */  OCAML_ASSIGN,
  /*  53 */  2,
  /*  54 */  OCAML_ACC1,
  /*  55 */  OCAML_NEQ,
  /*  56 */  OCAML_BRANCHIF_1B,
  /*  57 */  -45,
  /*  58 */  OCAML_CONST0,
  /*  59 */  OCAML_RETURN,
  /*  60 */  3,
  /*  61 */  OCAML_CONST0,
  /*  62 */  OCAML_PUSHCONSTINT_1B,
  /*  63 */  4,
  /*  64 */  OCAML_PUSH,
  /*  65 */  OCAML_PUSHACC2,
  /*  66 */  OCAML_GTINT,
  /*  67 */  OCAML_BRANCHIF_1B,
  /*  68 */  41,
  /*  69 */  OCAML_CHECK_SIGNALS,
  /*  70 */  OCAML_CONST0,
  /*  71 */  OCAML_PUSHCONSTINT_1B,
  /*  72 */  4,
  /*  73 */  OCAML_PUSH,
  /*  74 */  OCAML_PUSHACC2,
  /*  75 */  OCAML_GTINT,
  /*  76 */  OCAML_BRANCHIF_1B,
  /*  77 */  19,
  /*  78 */  OCAML_CHECK_SIGNALS,
  /*  79 */  OCAML_ACC4,
  /*  80 */  OCAML_PUSHACC2,
  /*  81 */  OCAML_PUSHACC5,
  /*  82 */  OCAML_PUSHGETGLOBAL_1B,
  /*  83 */  2,
  /*  84 */  OCAML_APPLY3,
  /*  85 */  OCAML_ACC1,
  /*  86 */  OCAML_PUSH,
  /*  87 */  OCAML_OFFSETINT_1B,
  /*  88 */  1,
  /*  89 */  OCAML_ASSIGN,
  /*  90 */  2,
  /*  91 */  OCAML_ACC1,
  /*  92 */  OCAML_NEQ,
  /*  93 */  OCAML_BRANCHIF_1B,
  /*  94 */  -15,
  /*  95 */  OCAML_CONST0,
  /*  96 */  OCAML_POP,
  /*  97 */  2,
  /*  98 */  OCAML_ACC1,
  /*  99 */  OCAML_PUSH,
  /* 100 */  OCAML_OFFSETINT_1B,
  /* 101 */  1,
  /* 102 */  OCAML_ASSIGN,
  /* 103 */  2,
  /* 104 */  OCAML_ACC1,
  /* 105 */  OCAML_NEQ,
  /* 106 */  OCAML_BRANCHIF_1B,
  /* 107 */  -37,
  /* 108 */  OCAML_CONST0,
  /* 109 */  OCAML_RETURN,
  /* 110 */  3,
  /* 111 */  OCAML_RESTART,
  /* 112 */  OCAML_GRAB,
  /* 113 */  2,
  /* 114 */  OCAML_ACC1,
  /* 115 */  OCAML_PUSHACC1,
  /* 116 */  OCAML_PUSHACC4,
  /* 117 */  OCAML_C_CALL2,
  /* 118 */  0,
  /* 119 */  OCAML_C_CALL2,
  /* 120 */  0,
  /* 121 */  OCAML_PUSH,
  /* 122 */  OCAML_BRANCHIFNOT_1B,
  /* 123 */  12,
  /* 124 */  OCAML_CONST0,
  /* 125 */  OCAML_PUSHACC3,
  /* 126 */  OCAML_PUSHACC3,
  /* 127 */  OCAML_PUSHACC6,
  /* 128 */  OCAML_C_CALL2,
  /* 129 */  0,
  /* 130 */  OCAML_C_CALL3,
  /* 131 */  2,
  /* 132 */  OCAML_RETURN,
  /* 133 */  4,
  /* 134 */  OCAML_CONST1,
  /* 135 */  OCAML_PUSHACC3,
  /* 136 */  OCAML_PUSHACC3,
  /* 137 */  OCAML_PUSHACC6,
  /* 138 */  OCAML_C_CALL2,
  /* 139 */  0,
  /* 140 */  OCAML_C_CALL3,
  /* 141 */  2,
  /* 142 */  OCAML_RETURN,
  /* 143 */  4,
  /* 144 */  OCAML_ACC0,
  /* 145 */  OCAML_BRANCHIFNOT_1B,
  /* 146 */  8,
  /* 147 */  OCAML_GETGLOBAL_1B,
  /* 148 */  3,
  /* 149 */  OCAML_C_CALL1,
  /* 150 */  1,
  /* 151 */  OCAML_RETURN,
  /* 152 */  1,
  /* 153 */  OCAML_GETGLOBAL_1B,
  /* 154 */  4,
  /* 155 */  OCAML_C_CALL1,
  /* 156 */  1,
  /* 157 */  OCAML_RETURN,
  /* 158 */  1,
  /* 159 */  OCAML_C_CALL1,
  /* 160 */  3,
  /* 161 */  OCAML_PUSHGETGLOBAL_1B,
  /* 162 */  5,
  /* 163 */  OCAML_C_CALL1,
  /* 164 */  3,
  /* 165 */  OCAML_PUSHGETGLOBAL_1B,
  /* 166 */  6,
  /* 167 */  OCAML_C_CALL1,
  /* 168 */  3,
  /* 169 */  OCAML_PUSHGETGLOBAL_1B,
  /* 170 */  7,
  /* 171 */  OCAML_C_CALL1,
  /* 172 */  3,
  /* 173 */  OCAML_PUSHGETGLOBAL_1B,
  /* 174 */  8,
  /* 175 */  OCAML_C_CALL1,
  /* 176 */  3,
  /* 177 */  OCAML_MAKEBLOCK_1B,
  /* 178 */  0,
  /* 179 */  5,
  /* 180 */  OCAML_PUSH,
  /* 181 */  OCAML_CLOSURE_1B,
  /* 182 */  0,
  /* 183 */  -37,
  /* 184 */  OCAML_SETGLOBAL_1B,
  /* 185 */  0,
  /* 186 */  OCAML_CLOSURE_1B,
  /* 187 */  0,
  /* 188 */  -74,
  /* 189 */  OCAML_SETGLOBAL_1B,
  /* 190 */  2,
  /* 191 */  OCAML_CLOSURE_2B,
  /* 192 */  0,
  /* 193 */  -1,
  /* 194 */  126,
  /* 195 */  OCAML_PUSH,
  /* 196 */  OCAML_CLOSURE_2B,
  /* 197 */  0,
  /* 198 */  -1,
  /* 199 */  63,
  /* 200 */  OCAML_PUSHCONST0,
  /* 201 */  OCAML_C_CALL1,
  /* 202 */  4,
  /* 203 */  OCAML_BRANCH_1B,
  /* 204 */  37,
  /* 205 */  OCAML_CHECK_SIGNALS,
  /* 206 */  OCAML_CONST0,
  /* 207 */  OCAML_C_CALL1,
  /* 208 */  5,
  /* 209 */  OCAML_ACC2,
  /* 210 */  OCAML_PUSHACC1,
  /* 211 */  OCAML_APPLY1,
  /* 212 */  OCAML_CONST0,
  /* 213 */  OCAML_C_CALL1,
  /* 214 */  6,
  /* 215 */  OCAML_ACC2,
  /* 216 */  OCAML_PUSHACC2,
  /* 217 */  OCAML_APPLY1,
  /* 218 */  OCAML_CONST0,
  /* 219 */  OCAML_PUSHCONSTINT_2B,
  /* 220 */  39,
  /* 221 */  16,
  /* 222 */  OCAML_PUSH,
  /* 223 */  OCAML_PUSHACC2,
  /* 224 */  OCAML_GTINT,
  /* 225 */  OCAML_BRANCHIF_1B,
  /* 226 */  13,
  /* 227 */  OCAML_CHECK_SIGNALS,
  /* 228 */  OCAML_ACC1,
  /* 229 */  OCAML_PUSH,
  /* 230 */  OCAML_OFFSETINT_1B,
  /* 231 */  1,
  /* 232 */  OCAML_ASSIGN,
  /* 233 */  2,
  /* 234 */  OCAML_ACC1,
  /* 235 */  OCAML_NEQ,
  /* 236 */  OCAML_BRANCHIF_1B,
  /* 237 */  -9,
  /* 238 */  OCAML_POP,
  /* 239 */  2,
  /* 240 */  OCAML_CONST1,
  /* 241 */  OCAML_BRANCHIF_1B,
  /* 242 */  -36,
  /* 243 */  OCAML_POP,
  /* 244 */  3,
  /* 245 */  OCAML_STOP
};

#include </Users/steven/github/OMicroB/src/byterun/runtime.c>

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
  (void *) &caml_array_get_addr,
  (void *) &ocaml_arduboy_print,
  (void *) &caml_array_set_addr,
  (void *) &caml_obj_dup,
  (void *) &ocaml_arduboy_init,
  (void *) &ocaml_arduboy_clear,
  (void *) &ocaml_arduboy_display
};
