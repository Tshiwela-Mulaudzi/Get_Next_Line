/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:14:41 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 14:05:08 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t counter;

	counter = 0;
	while (src[counter] != '\0' && (counter < len))
	{
		dst[counter] = src[counter];
		counter++;
	}
	while (counter < len)
	{
		dst[counter] = '\0';
		counter++;
	}
	return (dst);
}
