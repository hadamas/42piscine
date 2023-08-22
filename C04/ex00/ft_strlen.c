/*Create a function that counts and returns the number of characters in a string.

Allowed functions: None.
Code Contraints: for.*/
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*int	main(void)
{
	printf("%d", ft_strlen("alanis"));
}*/
