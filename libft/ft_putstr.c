/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:05:45 by tmulaud           #+#    #+#             */
/*   Updated: 2018/05/30 07:55:06 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int counter;

	counter = 0;
	if (s)
	{
		while (s[counter] != '\0')
		{
			ft_putchar(s[counter]);
			counter++;
		}
	}
}
