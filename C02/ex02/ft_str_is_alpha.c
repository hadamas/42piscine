/*Create a function that returns 1 if the string given as a parameter contains onlyalphabetical characters, and 0 if it contains any other character.
•It should return 1 if str is empty.

Allowed functions: None.
Code Contraints: for.*/
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{	
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 && str[i] <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_str_is_alpha("\n"));
}*/
