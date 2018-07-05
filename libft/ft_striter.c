/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:03:36 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 16:04:46 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int counter;

	counter = 0;
	if (s == NULL || f == NULL)
		return ;
	if (s)
	{
		while (s[counter] != '\0')
		{
			f((char *)&s[counter]);
			counter++;
		}
	}
}
