TITLE : Head and Tail commands

command 1: head
	Features:
		1. -n : Print first 'n' lines of given file/files, if n not specified print first 10 lines.
		2. -b : Print first 'n' bytes of given file/files, if n not specified print first 10 bytes.
		3. -q : quiet, silent
		4. -v : verbose
		5. -z : zero terminated
		6. >  : Write first 'n' lines from source file to target file.
		7. >> : Append first 'n' lines from source file to target file.
		8. If no option is given it waits for the standard input.
		
commnad 2: tail
	Features:
		1. -n : Print last 'n' lines of given file/files, if n not specified print last 10 lines.
		2. -b : Print last 'n' bytes of given file/files, if n not specified print last 10 bytes.
		3. -q : quiet, silent
		4. -v : verbose
		5. -z : zero terminated
		6. >  : Write last 'n' lines from source file to target file.
		7. >> : Append last 'n' lines from source file to target file.
		8. If no option is given it waits for the standard input.
			
compilation:	 	gcc head.c	gcc tail.c
		
Run        :		./a.out { <file1> <file2> ... } [option] 

Makefile   :		make head
			make tail
			make clean
		
help       :		./a.out helphead --h
			./a.out helptail --h
