/*Create a function that returns 1 if the string given as a parameter contains onlyuppercase alphabetical characters, and 0 if it contains any other character.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}
/*int   main(void)
{
        printf("%d", ft_str_is_uppercase("a"));
}*/
