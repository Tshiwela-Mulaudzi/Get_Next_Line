/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:37:15 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/04 14:41:44 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*fresh;
	size_t		counter;
	size_t		size;

	if (s)
	{
		fresh = (char *)ft_memalloc(sizeof(char) * (len + 1));
		counter = 0;
		size = 0;
		while (s[size])
			size++;
		if ((start + len <= size) && fresh)
		{
			while (counter < len)
			{
				fresh[counter] = s[start + counter];
				counter++;
			}
			fresh[counter] = '\0';
			return (fresh);
		}
	}
	return (NULL);
}
