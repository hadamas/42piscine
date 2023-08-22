/*Create a function that returns 1 if the number given as a parameter is a primenumber, and 0 if it isn’t. Tip: 0 and 1 are not prime numbers.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;
	int	prime_n;

	i = 2;
	prime_n = 0;
	if (nb < 2)
		return (0);
	if (nb == i)
		return (1);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_is_prime(5));
}*/
