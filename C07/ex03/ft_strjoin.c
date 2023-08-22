/*•Write a function that will concatenate all the strings pointed by strs separated by sep.
•size is the number of strings in strs
•if size is 0, you must return an empty string that you can free().
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

int	ft_final_len(int size, char **strs, int sep)
{
	int		i;
	int		count;

	i = 0;
	while (i <= size - 1)
	{
		if (i < size - 1)
		{
			count += ft_strlen(strs[i]);
			count += sep;
		}
		else
			count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*p;
	char	*p2;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	p = (char *)malloc(sizeof(char) * ft_final_len(size, strs, ft_strlen(sep)));
	p2 = p;
	if (p == NULL)
		return (0);
	while (i <= size - 1)
	{
		if (i < size -1)
		{
			ft_strcpy(p2, strs[i]);
			p2 += ft_strlen(strs[i]);
			ft_strcpy(p2, sep);
			p2 += ft_strlen(sep);
		}
		else
			ft_strcpy(p2, strs[i]);
		i++;
	}
	return (p);
}
/*int	main(void)
{
	char	*a[42];
	char	b[] = "42|RIO";
	char	c[] = "maracana";
	char	d[] = " ";
	char	*final;

	a[0] = b;
	a[1] = c;

	final = ft_strjoin(2, a, d);
	printf("%s", final);
}*/
