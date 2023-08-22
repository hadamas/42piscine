/*Create a function which reverses a given array of integer (first goes last, etc).
•The arguments are a pointer to int and the number of ints in the array.
Allowed functions: None.
Code constraints: for*/

//#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = size;
	while (tab[i] >= size)
	{
		/*write(1, &tab[i], 1);*/
		i--;
	}
}

/*int	main(void)
{
	int	lista[] = {97, 98, 99, 100, 101, 102};
	ft_rev_int_tab(lista, 5);
}*/
