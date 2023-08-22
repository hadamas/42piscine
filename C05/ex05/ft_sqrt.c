/*Create a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.

Allowed functions: None.
Code Contraints: for.*/

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	exp;

	exp = 1;
	if (nb <= 0)
		return (0);
	while (exp * exp <= nb)
	{
		if (exp * exp == nb)
			return (exp);
		if (exp > 46340)
			return (0);
		exp++;
	}
	return (0);
}

/*int	main(void)
{
	p*/
