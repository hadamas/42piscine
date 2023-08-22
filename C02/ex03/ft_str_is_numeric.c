/*Create a function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.
•It should return 1 if str is empty.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{	
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_str_is_numeric(""));
}*/
