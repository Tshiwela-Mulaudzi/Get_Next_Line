/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 13:22:48 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/04 13:59:21 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					counter;
	const unsigned char		*source;
	unsigned char			*destination;

	counter = 0;
	source = src;
	destination = dst;
	while (counter < n)
	{
		destination[counter] = source[counter];
		if (source[counter] == (unsigned char)c)
			return (dst + counter + 1);
		counter++;
	}
	return (NULL);
}
