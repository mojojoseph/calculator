all:	calculator

.PHONY:  libs
libs:
	cd mathlib && $(MAKE)
	

calculator:	calculator.o libs
	gcc -Lmathlib -o calculator calculator.o -lmathlib

.c.o:
	gcc -Imathlib -c $<

clean:
	cd mathlib && $(MAKE) clean
	rm -f calculator *.o
