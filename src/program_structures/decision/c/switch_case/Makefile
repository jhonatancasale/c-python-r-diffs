all:
	@gcc -Wall sample_switch_case.c -o sample_switch_case && echo "Compiled"

clean:
	@rm -f sample_switch_case *~

run:
	@./sample_switch_case

time:
	time ./sample_switch_case

val:
	valgrind ./sample_switch_case

tags:
	ctags --recurse=yes --verbose=yes .
