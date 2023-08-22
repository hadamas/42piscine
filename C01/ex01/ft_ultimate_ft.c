/*Create a function that takes a pointer to pointer to pointer to pointer to pointerto pointer to pointer to pointer to pointer to int as a parameter and sets the value"42" to that int.
Allowed functions: None
Code constraints: for, any library*/

/*#include <unistd.h>*/
void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*int	main(void)
{
	int v = 0;
	int *a = &v;
	int **b = &a;
	int ***c = &b;
	int ****d = &c;
	int *****e = &d;
	int ******f = &e;
	int *******g = &f;
	int ********h = &g;
	int *********i = &h;
	
	ft_ultimate_ft(i);

	write(1, &v, sizeof(v));
}*/
