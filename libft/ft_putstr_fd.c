/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:53:43 by tmulaud           #+#    #+#             */
/*   Updated: 2018/05/30 07:59:18 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int counter;

	counter = 0;
	if (s)
	{
		while (s[counter] != '\0')
		{
			ft_putchar_fd(s[counter], fd);
			counter++;
		}
	}
}
