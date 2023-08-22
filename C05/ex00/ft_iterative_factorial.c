/*Create an iterated function that returns a number. This number is the result of a factorial operation based on the number given as a parameter.
•If the argument is not valid the function should return 0.
•Overflows must not be handled, the function return will be undefined.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*int	main(void)
{
	printf("%d", ft_iterative_factorial(-2));
}*/
