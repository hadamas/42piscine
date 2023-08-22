/*Reproduce the behavior of the function strncmp(man strncmp).

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("abc99", "abc", 5));
	printf("%d\n", strncmp("abc99", "abc", 5));
}*/
