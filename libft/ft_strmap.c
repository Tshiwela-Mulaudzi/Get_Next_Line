/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:41:06 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 16:11:50 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		counter;
	char	*fresh;

	counter = 0;
	if (!s || !f)
		return (NULL);
	fresh = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (fresh == NULL)
		return (NULL);
	if (fresh)
	{
		while (s[counter])
		{
			fresh[counter] = (f)(s[counter]);
			counter++;
		}
		fresh[counter] = '\0';
	}
	return (fresh);
}
