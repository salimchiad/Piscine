/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 22:30:51 by schiad            #+#    #+#             */
/*   Updated: 2015/07/10 04:17:13 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a < ':')
	{
		while (b < ':')
		{
			while (c < ':')
			{
				if ((a < b) && (b < c))
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(',');
					ft_putchar(' ');
				}
				c = c + 1;
			}
			b = b + 1;
			if (c == ':')
				c = '0';
		}
		a = a + 1;
		if (b == ':')
			b = '0';
	}
}
