/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:34:47 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 13:59:34 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	counter;
	int		destlen;

	counter = 0;
	destlen = 0;
	while (s1[destlen] != '\0')
		destlen++;
	while (s2[counter] && counter < n)
	{
		s1[destlen + counter] = s2[counter];
		counter++;
	}
	s1[destlen + counter] = '\0';
	return (s1);
}
