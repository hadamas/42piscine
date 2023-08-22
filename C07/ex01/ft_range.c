/*Create a functionft_rangewhich returns an array ofints. This int array should contain all values between min and max.
•Minincluded -max excluded.
•If min ́value is greater or equal tomax’s value, a null pointer should be returned.
Allowed functions: molloc.
Code Contraints: for.*/

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*arr;

	i = 0;
	j = min;
	arr = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (NULL);
	while (i < max - min)
	{
		arr[i] = j;
		i++;
		j++;
	}
	return (arr);
}
/*int	main(void)
{
	int	max = 9;
	int	min = 3;
	int	i = 0;
	int	*array = ft_range(min, max);

	while (i < max - min)
	{
		printf("%d", array[i]);
		i++;
	}
}*/
