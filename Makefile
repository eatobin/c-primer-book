# this is a comment

# target: dependencies
# 	action

#all: most least
#
#most: most.o hello_fn.o
#	gcc -o most most.o hello_fn.o
#
#most.o: most.c hello.h
#	gcc -c most.c
#
#hello_fn.o: hello_fn.c
#	gcc -c hello_fn.c
#
#least: least.o hello_fn.o
#	gcc -o least least.o hello_fn.o
#
#least.o: least.c hello.h
#	gcc -c least.c

listing1:
	gcc -o Ch01/listing1 Ch01/listing1.c

clean:
	rm Ch01/listing1

run-listing1:
	Ch01/listing1
