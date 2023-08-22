/*Create a function that counts and returns the number of characters in a string.
Allowed functions: None.
Code constraints: for*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	ft_strlen("abc");
}
