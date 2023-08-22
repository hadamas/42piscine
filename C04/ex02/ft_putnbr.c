/*Create a function that displays the number entered as a parameter. The functionhas to be able to display all possible values within aninttype variable. For example: ◦ft_putnbr(42)displays "42".

Allowed functions: write.
Code Contraints: for.*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*int	main(void)
{
	ft_putnbr(42);
}*/
