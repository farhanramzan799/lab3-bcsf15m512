mymain.out:mystr.o mymathfunc.o mymain.o
	gcc mystr.o mymathfunc.o mymain.o -o mymain.out

mymain.o:mymain.c myst.h mymath.h 
	gcc -c mymain.c -L$t4/

mymathfunc.o:mymathfunc.c mymath.h
	gcc -c mymathfunc.c

mystr.o:mystr.c myst.h
	gcc -c mystr.c
