/*Create a recursive function that returns the factorial of the number given as a parameter.
•If the argument is not valid the function should return 0.
•Overflows must not be handled, the function return will be undefined.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
}*/
