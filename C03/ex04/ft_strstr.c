/*Reproduce the behavior of the function strstr(man strstr).

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>
#include <string.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i] - j);
			i++;
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	return (str);
}
/*int	main(void)
{
	char	a[] = "alalalal";
	char	b[] = "banana";
	printf("%s\n", ft_strstr(a, b));
	printf("%s\n", strstr(a, b));
}*/
