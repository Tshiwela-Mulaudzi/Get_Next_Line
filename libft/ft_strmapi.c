/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:10:11 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 16:14:19 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*fresh;

	if (!f || !s)
		return (NULL);
	counter = 0;
	fresh = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (fresh)
	{
		while (s[counter])
		{
			fresh[counter] = f(counter, (char)s[counter]);
			counter++;
		}
		fresh[counter] = '\0';
	}
	return (fresh);
}
