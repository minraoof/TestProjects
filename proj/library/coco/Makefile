CC = gcc
CFLAGS = -g -fPIC

SUBS = sub1.o sub2.o

STATIC = libcoconut.a
DYNAMIC = libcoconut-1.1.so
DEVEL = libcoconut.so
SONAME = libcoconut.so.1


all : $(STATIC) $(SONAME) $(DEVEL)

$(SONAME) : $(DYNAMIC)
	ln -s $(DYNAMIC) $(SONAME)

$(DEVEL) : $(DYNAMIC)
	ln -s $(DYNAMIC) $(DEVEL)


$(STATIC) : $(SUBS)
	ar rcs $(STATIC)  $(SUBS)

$(DYNAMIC) : $(SUBS)
	gcc -shared -Wl,-soname,libcoconut.so.1 $(SUBS) -o $(DYNAMIC)
clean:
	$(RM) $(SUBS) $(STATIC) $(DEVEL) $(DYNAMIC) $(SONAME)
