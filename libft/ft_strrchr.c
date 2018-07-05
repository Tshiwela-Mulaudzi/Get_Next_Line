/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 18:25:09 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/02 14:09:03 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int counter2;

	counter2 = ft_strlen(s);
	while (counter2 >= 0)
	{
		if (s[counter2] == (char)c)
		{
			return ((char *)(s + counter2));
		}
		counter2--;
	}
	return (NULL);
}
