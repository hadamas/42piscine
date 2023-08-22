/*Reproduce the behavior of the function strcat(man strcat).

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	a[] = "Alanis ";
	char	b[] = "Hadama";
	printf("%s", ft_strcat(a, b));
}*/
