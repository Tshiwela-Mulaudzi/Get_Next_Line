/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 08:19:06 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/04 14:18:21 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (s1[counter] == s2[counter] && s1[counter] && s2[counter]
			&& --n > 0)
	{
		counter++;
	}
	return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
}
