/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:10:34 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 13:18:13 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t counter;

	counter = 0;
	if (src < dst)
	{
		counter = n;
		while (counter > 0)
		{
			counter--;
			((char*)dst)[counter] = ((char*)src)[counter];
		}
	}
	else
	{
		while (counter < n)
		{
			((char*)dst)[counter] = ((char*)src)[counter];
			counter++;
		}
	}
	return (dst);
}
