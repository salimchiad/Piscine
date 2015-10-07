/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 15:43:29 by schiad            #+#    #+#             */
/*   Updated: 2015/07/09 19:21:45 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char);

void	ft_print_reverse_alphabet(void)
{
	char lettre;
	char derniere_lettre;

	lettre = 'z';
	derniere_lettre = 'a';
	while (lettre >= derniere_lettre)
	{
		ft_putchar(lettre);
		lettre = lettre - 1;
	}
	ft_putchar('\n');
}
