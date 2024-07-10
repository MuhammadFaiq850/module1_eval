CFLAGS = -Wno-implicit-function-declaration

all: final

final: module1_eval.o
	gcc $(CFLAGS) module1_eval.o -o final	
	chmod +x final

module1_eval.o: module1_eval.c
	gcc $(CFLAGS) -c .c

clean:
	rm module1_eval.o final
