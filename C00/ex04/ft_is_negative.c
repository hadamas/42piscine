/*Create a function that displays ’N’ or ’P’ depending on the integer’s sign enteredas a parameter. Ifnis negative, display ’N’. If n is positive or null, display ’P’.
Allowed functions: write.
Code constraints: for*/

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

int		main(void)
{
	ft_is_negative(-3);
}
