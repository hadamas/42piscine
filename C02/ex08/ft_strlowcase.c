/*Create a function that transforms every letter to lowercase. It should return str.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{	
			str[i] += 32;
			i++;
		}
		else if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str0[] = "aLANi9s";
	char    str1[] = "";
	char    str2[] = "\n";
	printf("%s", ft_strlowcase(str0));
	printf("%s", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(str2));
}*/
