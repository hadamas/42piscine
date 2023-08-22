/*Create a recursive function that returns the value of a power applied to a number.
•A power lower than 0 returns 0.
•Overflows must not be handled.
•We’ve decided that 0 power 0 will returns 1

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (i * ft_recursive_power(nb, power - 1));
}
/*int	main(void)
{
	printf("%d", ft_recursive_power(3, 3));
	return (0);
}*/
