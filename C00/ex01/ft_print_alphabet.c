/*Create a function that displays the alphabet in lowercase, on a single line, byascending order, starting from the letter ’a’.
Allowed functions: write.
Code constraints: for*/

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int	main(void)
{
	ft_print_alphabet();
}