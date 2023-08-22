/*Create a function that displays the alphabet in lowercase, on a single line, bydescending order, starting from the letter ’z’.
Allowed functions: write.
Code contraints: for.*/
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;		
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}
