CFLAGS = -g -I../coco2
LDFLAGS = -L../coco2
LDLIBS = -lcoconut-1
CC = gcc


prog: main.o
	gcc $(CFLAGS) $(LDFLAGS) -o prog2 main.o $(LDLIBS)

clean:
	$(RM) main.o prog
