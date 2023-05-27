
all: libyc demo

DUB_OPT=--build=debug # -q
DUB=/usr/bin/dub
DUB=dub

export PYTHON_LIB_DIR:=.
export PYD_LIBPYTHON_DIR:=.
export PYD_LIBPYTHON:=python3.9
libyc: yc  # for now, this 2 are the same


# source/yipy.gram
# source/ast.py
# source/system.d
yc: source/*.d  # this actually is the D exe
	$(DUB) test
	$(DUB) build $(DUB_OPT)

TEST_DIR = test/rename_field
example:
	./yc -c $(TEST_DIR)/visitor.yi
	cd $(TEST_DIR) && dmd visitorApp.d visitor.d && ./visitorApp

PEGEN_DIR = $(shell pwd)/../pegen/src
YIPY_PARSER = source/yipy_parser.py

GRAM=source/python.gram  # as std reference
GRAM=source/yipy.gram

YIPYC=PYTHONPATH=$(shell pwd)/source:$(PEGEN_DIR):$(PYTHONPATH) python $(YIPY_PARSER)

TARGET_LANG = java
TARGET_LANG = # d
%.exe:%.yi
	$(YIPYC) $< $(TARGET_LANG) # -r -q
	dmd -debug -g $*.d -of=$@
	./$@ > $*.out

demo:
	PYTHONPATH=$(PEGEN_DIR):$(PYTHONPATH) python -m pegen --quiet $(GRAM) -o $(YIPY_PARSER)
	make -B test/demo.exe
	cat test/demo.out

city:
	make -B test/city.exe

tests:
	make test/rename_chain.exe
	make test/diamond.exe

clean:
	$(DUB) clean
	$(RM) -fr bin/ ./lib/pyd/liblibyc.so

# if needed to change account:
# git config --global -e
push:
	git config --global --list
	git push https://'yilabs'@github.com/yilabs/yilang.git


setup:
	pip install git+https://github.com/erikrose/parsimonious


tgz:
	tar czf yi.tgz source test Makefile
