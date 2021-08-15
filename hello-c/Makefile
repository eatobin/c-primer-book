# this is a comment

# target: dependencies
# 	action

all: most least

most: most.o hello_fn.o
	gcc most.o hello_fn.o -o most

most.o: most.c hello.h
	gcc -c most.c

hello_fn.o: hello_fn.c
	gcc -c hello_fn.c

least: least.o hello_fn.o
	gcc least.o hello_fn.o -o least

least.o: least.c hello.h
	gcc -c least.c

clean:
	rm *.o most least

hi-both:
	gcc -o both both.c hello_fn.c hello.h

bye-both:
	rm both
