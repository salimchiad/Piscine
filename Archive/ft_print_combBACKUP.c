/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 22:30:51 by schiad            #+#    #+#             */
/*   Updated: 2015/07/10 01:48:39 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

void ft_print_comb(void)
{
char a;
char b;
char c;
int nombre;
int i;
int j;
char d[3][320];

a = '0';
b = '0';
c = '0';
nombre = 0;

	while(a < ':')
	{
		while(b < ':')
		{
			while(c < ':')
			{
				i = 0;
			if((a != b) && (a != c) && (b != c))
			{
				j = 0;
				while (i <= nombre)
				{
					while(j < 3)
					{
						if (( d[j][i] != c) && ( d[(j+1)%3][i] != b || d[(j+2)%3][i] != b ) && ( d[(j+1%3)][i] != a || d[(j+2%3)][i] != a ))
						{
							ft_putchar(a);
							ft_putchar(b);
							ft_putchar(c);
							d[0][nombre] = a;
							d[1][nombre] = b;
							d[2][nombre] = c;
							nombre = nombre + 1;
							ft_putchar(',');
							ft_putchar(' ');
							}
						j++;
						ft_putchar('a');
					}
					i++;
					ft_putchar('b');
				}
				ft_putchar('c');
			}
			ft_putchar('d');
			c = c + 1;
			}
		b = b + 1;
		if(c == ':')
		{
			c = '0';
		}
		}
	a = a + 1;
	if(b == ':')
	{
		b = '0';
	}
	}
if(a == ':')
{
a = '0';
}

}
