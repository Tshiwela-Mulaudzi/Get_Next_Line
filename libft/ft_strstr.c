/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 18:54:52 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 14:11:06 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	hc;
	unsigned int	nc;
	int				i;

	hc = 0;
	nc = 0;
	i = ft_strlen(needle);
	if (i == 0)
		return ((char *)(haystack));
	while (haystack[hc])
	{
		while (needle[nc] == haystack[hc + nc])
		{
			if (nc == i - 1)
				return ((char *)(haystack + hc));
			nc++;
		}
		nc = 0;
		hc++;
	}
	return (0);
}
