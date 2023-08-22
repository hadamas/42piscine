/*Create a function that returns 1 if the string given as a parameter contains onlyprintable characters, and 0 if it contains any other character.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("\n%d", ft_str_is_printable("a7B"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\n"));
	printf("\n%d", ft_str_is_printable("\x7F"));
	return (0);
}*/
