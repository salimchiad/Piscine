/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 09:12:31 by schiad            #+#    #+#             */
/*   Updated: 2015/07/09 18:57:13 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_alphabet(void)
{
	char lettre;
	char derniere_lettre;

	lettre = 'a';
	derniere_lettre = 'z';
	while (lettre <= derniere_lettre)
	{
		ft_putchar(lettre);
		lettre = lettre + 1;
	}
	ft_putchar('\n');
}
