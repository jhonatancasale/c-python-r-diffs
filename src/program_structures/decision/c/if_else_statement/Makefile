all:
	@gcc -Wall sample_if_else_statement.c -o sample_if_else_statement && echo "Compiled"

clean:
	@rm -f sample_if_else_statement *~

run:
	@./sample_if_else_statement

time:
	time ./sample_if_else_statement

val:
	valgrind ./sample_if_else_statement

tags:
	ctags --recurse=yes --verbose=yes .
