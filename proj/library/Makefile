CFLAGS = -g -Icoco
LDFLAGS = -Lcoco
LDLIBS = -lcoconut-1
CC = gcc


prog: main.o
	gcc $(CFLAGS) $(LDFLAGS) -o prog main.o $(LDLIBS)

clean:
	$(RM) main.o prog
