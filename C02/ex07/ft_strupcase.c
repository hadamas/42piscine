/*Create a function that transforms every letter to uppercase. It should return str.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
/*int	main(void)
{
	char	str0[] = "lanSi6";
	char	str1[] = "";
	char	str2[] = "AAAla5\n";
	printf("%s", ft_strupcase(str0));
	printf("%s", ft_strupcase(str1));
	printf("%s", ft_strupcase(str2));
	return (0);
}*/
