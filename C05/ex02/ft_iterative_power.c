/*Create an iterated function that returns the value of a power applied to a number.
•A power lower than 0 returns 0.
•Overflows must not be handled.
•We’ve decided that 0 power 0 will returns 1

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
/*int	main(void)
{
	printf("%d", ft_iterative_power(3, 1));
}*/
