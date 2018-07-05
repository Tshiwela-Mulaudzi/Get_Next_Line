/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 06:49:04 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 14:08:03 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t counter;

	if (*needle == '\0')
		return ((char *)haystack);
	counter = 0;
	while (*haystack && len)
	{
		if (*haystack == needle[counter])
			counter++;
		else
			counter = 0;
		if (needle[counter] == '\0')
			return ((char*)haystack - counter + 1);
		haystack++;
		len--;
	}
	return (NULL);
}
