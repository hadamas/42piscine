/*Reproduce the behavior of the functionstrcpy(man strcpy).
Allowed functions: None.
Code Contraints: for.*/

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{	
	char a[4] ;
	printf("%s", ft_strcpy(a, "abc"));
}*/
