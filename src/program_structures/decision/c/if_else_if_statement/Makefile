all:
	@gcc -Wall sample_if_else_if_statement.c -o sample_if_else_if_statement && echo "Compiled"

clean:
	@rm -f sample_if_else_if_statement *~

run:
	@./sample_if_else_if_statement

time:
	time ./sample_if_else_if_statement

val:
	valgrind ./sample_if_else_if_statement

tags:
	ctags --recurse=yes --verbose=yes .
