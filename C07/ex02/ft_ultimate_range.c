/*Create a function ft_ultimate_range which allocates and assigns an array of ints.This int array should contain all values between min and max.
•Min included -max excluded.
•If min ́value is greater or equal tomax’s value, a null pointer should be returned.
•The size ofrangeshould be returned (or -1 on error).
•If the value of min is greater or equal to max’s value,range will point on NULL and it should return 0.
Allowed functions: molloc.
Code Contraints: for.*/

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		j;
	int		*dest;

	i = 0;
	j = min;
	if (min >= max)
		return (0);
	dest = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		dest[i] = j;
		i++;
		j++;
	}
	*range = dest;
	if (range == NULL)
		return (-1);
	return (i);
}
/*int	main(void)
{
	int	*p;
	int	min = 2;
	int	max = 5;
	printf("%d", ft_ultimate_range(&p, min, max));
}*/
