/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 14:48:39 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 13:12:45 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	*src;
	unsigned char	chara;

	counter = 0;
	src = (unsigned char*)s;
	chara = (unsigned char)c;
	while (counter < n)
	{
		if (src[counter] == chara)
			return (src + counter);
		counter++;
	}
	return (NULL);
}
