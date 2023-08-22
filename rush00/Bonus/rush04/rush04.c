/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:03:47 by ahadama-          #+#    #+#             */
/*   Updated: 2023/07/30 19:09:43 by jonferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_top(int x);
void	ft_mid(int x, int y);
void	ft_bottom(int x);
void	ft_error(void);

void	rush(int x, int y)
{
	if (x >= 1 && y >= 1)
	{
		ft_top(x);
		ft_mid(x, y);
		if (y >= 2)
			ft_bottom(x);
	}
	else
	{
		ft_error();
	}
}

void	ft_top(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	ft_mid(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= (y - 2))
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 || i == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	ft_bottom(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar('C');
		else if (i == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}
