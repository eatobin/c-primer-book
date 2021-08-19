# this is a comment

# target: dependencies
# 	action

all: most least

most: most.o hello_fn.o
	gcc -o most most.o hello_fn.o

most.o: most.c hello.h
	gcc -c most.c

hello_fn.o: hello_fn.c
	gcc -c hello_fn.c

least: least.o hello_fn.o
	gcc -o least least.o hello_fn.o

least.o: least.c hello.h
	gcc -c least.c

both:
	gcc -o both both.c hello_fn.c hello.h

clean:
	rm *.o most least

clean-both:
	rm both

run-most:
	./most

run-least:
	./least

run-both:
	./both
