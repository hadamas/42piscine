/*Reproduce the behavior of the functionstrdup(man strdup).
Allowed functions: molloc.
Code Contraints: for.*/
#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strdup(char *src)
{
	char	*target;

	target = malloc(ft_strlen(src) * sizeof(char) + 1);
	if (target == NULL)
		return (NULL);
	return (ft_strcpy(target, src));
}
/*int	main(void)
{
	char	*var;
	var = ft_strdup("42|RIO");
	printf("%s", var);
}*/
