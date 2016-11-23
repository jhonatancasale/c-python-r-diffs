all:
	@gcc -Wall sample_functions.c -o sample_functions && echo "Compiled"

clean:
	@rm -f sample_functions *~

run:
	@./sample_functions

time:
	time ./sample_functions

val:
	valgrind ./sample_functions

tags:
	ctags --recurse=yes --verbose=yes .
