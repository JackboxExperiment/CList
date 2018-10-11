all: cllist.o driver.o
	gcc cllist.o driver.o

cllist.o: cllist.c cllist.h
	gcc -c cllist.c

driver.o: driver.c cllist.h
	gcc -c driver.c
