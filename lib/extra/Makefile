###########################################################################
##                                                                       ##
##                                OCaPIC                                 ##
##                                                                       ##
##                             Benoit Vaugon                             ##
##                                                                       ##
##    This file is distributed under the terms of the CeCILL license.    ##
##    See file ../../LICENSE-en.                                         ##
##                                                                       ##
###########################################################################

include ../../etc/Makefile.conf

MLS = $(wildcard *.ml)
MLIS = $(wildcard *.mli)
CMOS = $(MLS:.ml=.cmo)
CMXS = $(MLS:.ml=.cmx)
CMIS = $(MLIS:.mli=.cmi)
OBJS = $(CMIS) $(CMOS) $(CMXS)

extra: $(OBJS)

serial.cmo: serial.ml serial.cmi
	$(OCAMLC) -thread -c $<

serial.cmx: serial.ml serial.cmi
	$(OCAMLOPT) -thread -c $<

serial.cmi: serial.mli
	$(OCAMLC) -c $<

simul.cmo: simul.ml simul.cmi
	$(OCAMLC) -thread -c $<

simul.cmx: simul.ml simul.cmi
	$(OCAMLOPT) -thread -c $<

simul.cmi: simul.mli
	$(OCAMLC) -thread -c $<

clean:
	@rm -f *~ *.cmo *.cmx *.cmi *.o *.3o

.PHONY: extra clean
