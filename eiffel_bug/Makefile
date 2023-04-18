OPT= -clean #-sedb

ISE_OPT = -full #: with full class checking regardless of ECF settings.

SE=compile  # SmartEiffel
EC=ec

se_:
	cd se && make se
se:
	$(SE) $(OPT) app.e -o app
	./app > se.out

ise:
	$(EC) $(OPT) $(ISE_OPT) app.e
	./app > ise.out

gobo:
	$(PROJECT)/gobo/bin/gec app.ecf
	./app > gobo.out

clean:
	$(RM) -fr app a.out EIFGENs/
	clean app
