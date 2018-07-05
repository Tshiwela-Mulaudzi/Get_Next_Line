/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:12:16 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 13:13:27 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					counter;
	const unsigned char		*str1;
	const unsigned char		*str2;

	counter = 0;
	str1 = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	while (counter < n)
	{
		if (str1[counter] != str2[counter])
			return (str1[counter] - str2[counter]);
		else
			counter++;
	}
	return (0);
}
