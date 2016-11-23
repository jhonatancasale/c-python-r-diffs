all:
	@gcc -Wall sample_sum_prime_numbers.c -o sample_sum_prime_numbers && echo "Compiled"

clean:
	@rm -f sample_sum_prime_numbers *~

run:
	@./sample_sum_prime_numbers

time:
	time ./sample_sum_prime_numbers

val:
	valgrind ./sample_sum_prime_numbers

tags:
	ctags --recurse=yes --verbose=yes .
