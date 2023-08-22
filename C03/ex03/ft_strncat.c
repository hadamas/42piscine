/*Reproduce the behavior of the function strncat(man strncat).

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char	a[] = "Alanis";
	char	b[] = " Hadama";
	printf("%s", ft_strncat(a, b, 9));
}*/
