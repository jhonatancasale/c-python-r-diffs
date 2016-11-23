all:
	@gcc -Wall sample_for_loops.c -o sample_for_loops && echo "Compiled"

clean:
	@rm -f sample_for_loops *~

run:
	@./sample_for_loops

time:
	time ./sample_for_loops

val:
	valgrind ./sample_for_loops

tags:
	ctags --recurse=yes --verbose=yes .
