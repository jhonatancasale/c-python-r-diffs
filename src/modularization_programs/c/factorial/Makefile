all:
	@gcc -Wall sample_factorial.c -o sample_factorial && echo "Compiled"

clean:
	@rm -f sample_factorial *~

run:
	@./sample_factorial

time:
	time ./sample_factorial

val:
	valgrind ./sample_factorial

tags:
	ctags --recurse=yes --verbose=yes .
