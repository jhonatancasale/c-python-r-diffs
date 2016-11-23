all:
	@gcc -Wall sample_do_while_loops.c -o sample_do_while_loops && echo "Compiled"

clean:
	@rm -f sample_do_while_loops *~

run:
	@./sample_do_while_loops

time:
	time ./sample_do_while_loops

val:
	valgrind ./sample_do_while_loops

tags:
	ctags --recurse=yes --verbose=yes .
