/*We’re dealing with a program here, you should therefore have a function main in your.c file.•Create a program that displays its given arguments.
•One per line, in the reverse order of the command line.
•It should display all arguments, except forargv[0]*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	j = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				ft_putchar(argv[i][j]);
				j++;
			}
		j = 0;
		i--;
		ft_putchar('\n');
		}
	}
}
