# this is a comment

# target: dependencies
# 	action

all: listing1

listing1:
	gcc -o Ch01/listing1 Ch01/listing1.c

listing1-run:
	Ch01/listing1

clean:
	rm Ch01/listing1
