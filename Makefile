head: head.c functions.h 
	cc head.c -o head
head.o: head.c functions.h
	cc -c head.c
tail: tail.c functions.h stack.c stack.h
	cc tail.c -o tail
tail.o: tail.c stack.c functions.h 
	cc -c tail.c
clean:
	rm -rf *o head
	rm -rf *o tail
