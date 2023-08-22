/*Create a function that displays all different combinations of three different digits inascending order, listed by ascending order - yes, repetition is voluntary.

Here’s the intended output : 
$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>
987 isn’t there because 789 already is.
999 isn’t there because the digit 9 is present more than once.

Allowed functions: write.
Code constraints: for*/

#include <unistd.h>

void	ft_print_comb(void)
{
	char	p0;
	char	p1;
	char	p2;

	p0 = '0';
	while (p0 < '8')
	{
		p1 = p0 + 1;
		while (p1 < '9')
		{
			p2 = p1 + 1;
			while (p2 <= '9')
			{
				write(1, &p0, 1);
				write(1, &p1, 1);
				write(1, &p2, 1);
				if (p0 != '7')
					write(1, ", ", 2);
				p2++;
			}
			p1++;
		}
		p0++;
	}
}	

int	main(void)
{
	ft_print_comb();
	return (0);
}
