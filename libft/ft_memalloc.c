/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:33:23 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 15:51:34 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*something;

	something = malloc(size);
	if (something == NULL)
	{
		return (NULL);
	}
	ft_memset(something, 0, size);
	return (something);
}
