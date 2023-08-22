/*Reproduce the behavior of the function strncpy(man strcpy).
Allowed functions: None.
Code Contraints: for.*/
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	b[4];
	printf("%s", ft_strncpy(b, "algo", 4));
	printf("%s", ft_strncpy(b, "", 2));
	printf("%s", ft_strncpy(b, "\n", 2));
}*/
