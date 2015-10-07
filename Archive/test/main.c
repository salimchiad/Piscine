/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schiad <schiad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 09:27:18 by schiad            #+#    #+#             */
/*   Updated: 2015/07/16 10:13:41 by schiad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#define LEN 8000000000

int main ()
{
	char *str;
	unsigned long i;

	i = 0;
	str = (char*)malloc(sizeof(*str) * (LEN + 1));
	while (i < LEN)
	{
		str[i] = (i);
		i++;
	}
	while (1)
		;
return (0);
}
