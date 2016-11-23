all:
	@gcc -Wall sample_while_loops.c -o sample_while_loops && echo "Compiled"

clean:
	@rm -f sample_while_loops *~

run:
	@./sample_while_loops

time:
	time ./sample_while_loops

val:
	valgrind ./sample_while_loops

tags:
	ctags --recurse=yes --verbose=yes .
