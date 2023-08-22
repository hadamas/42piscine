/*Create a function that swaps the value of two integers whose addresses are enteredas parameters.
Allowed functions: None
Code constraints: for, any library*/

/*#include <unistd.h>*/
void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}
/*int	main(void)
{
	int a = '2';
	int b = '4';
	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
}*/
