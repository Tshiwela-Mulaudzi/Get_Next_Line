/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 12:16:36 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 13:15:51 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*destblock;
	char	*srcblock;

	destblock = (char*)dst;
	srcblock = (char*)src;
	while (n--)
	{
		*destblock++ = *srcblock++;
	}
	return (dst);
}
