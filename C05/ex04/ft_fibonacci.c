/*Create a functionft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index. 
We’ll consider that the Fibonaccisequence starts like this: 0, 1, 1, 2.
•Overflows must not be handled, the function return will be undefined.
•Obviously,ft_fibonaccihas to be recursive.
•If theindexis less than 0, the function should return -1.

Allowed functions: None.
Code Contraints: for.*/

/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int	main(void)
{
	printf("%d\n", ft_fibonacci(3));
}*/
