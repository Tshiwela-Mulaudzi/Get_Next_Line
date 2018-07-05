/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:59:25 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/04 13:57:33 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	counter;
	size_t	dlen;
	size_t	size;

	counter = 0;
	dlen = 0;
	size = dstsize;
	while (dst[dlen] && size-- != 0)
		dlen++;
	size = dstsize - dlen;
	if (size == 0)
		return (dlen + ft_strlen(src));
	while (src[counter] != '\0')
	{
		if (size != 1)
		{
			dst[dlen + counter] = src[counter];
			size--;
		}
		counter++;
		dst[dlen + counter] = '\0';
	}
	return (dlen + counter);
}
