/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:27:51 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 16:07:00 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int counter;

	counter = 0;
	if (s == NULL || f == NULL)
		return ;
	if (s)
	{
		while (s[counter] != '\0')
		{
			f(counter, (char*)&s[counter]);
			counter++;
		}
	}
}
