/*Write a function that displays the character passed as a parameter.
  Allowed functions: write.
  Code constraints: for.*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	ft_putchar('c');
	return (0);
}