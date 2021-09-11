
SUBS = main.o sub1.o
SUBS += sub2.o

CFLAGS = -g -O0
CC = gcc

all : prog util

prog : $(SUBS)
	$(CC) $(CFLAGS) -o prog $(SUBS)

util: 
	make -C tool

clean:
	$(RM) prog $(SUBS)
	make -C tool clean

.PHONY: clean all util

