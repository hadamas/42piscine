/*Create a function that displays all digits, on a single line, by ascending order.
Allowed functions: write.
Code constraints: for*/
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;		
	}
}
int	main(void)
{
	ft_print_numbers();
}
