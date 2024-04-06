OPT= -clean #-sedb

ISE_OPT = -full  #: with full class checking regardless of ECF settings.

SE=compile  # SmartEiffel
EC=ec

se_:
	cd se && make se
se:
	$(SE) $(OPT) app.e -o app
	./app > se.out
	cat     se.out

ise:
	@echo ""
	@echo "ISE compiler workbench mode implements the reference identity semantics"
	@echo ""
	$(EC) $(OPT) $(ISE_OPT) app.e
	./app > ise_W.out
	cat     ise_W.out
	@echo ""
	@echo "ISE compiler finalized mode implements the separation semantics"
	@echo ""
	$(EC) $(OPT) $(ISE_OPT) -finalize app.e
	./app > ise_F.out
	cat     ise_F.out


gobo:
	$(PROJECT)/gobo/bin/gec app.ecf
	./app > gobo.out
	cat     gobo.out

clean:
	$(RM) -fr app a.out EIFGENs/ app.sh app.h app1.c app2.c *.o
	clean app
