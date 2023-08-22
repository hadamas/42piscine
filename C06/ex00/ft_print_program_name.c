/*We’re dealing with a program here, you should therefore have a function main in your.c file.•Create a program that displays its own name followed by a new line.
•Example :
$>./a.out | cat -e
./a.out$
$>*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
