/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:05:53 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 15:37:46 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	dest[i] = '\0';
	return (dest);
}
