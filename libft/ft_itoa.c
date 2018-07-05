/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmulaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 20:39:26 by tmulaud           #+#    #+#             */
/*   Updated: 2018/06/05 21:32:31 by tmulaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*getstr(char *ptr)
{
	char		*str;
	int			i;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	str = (char *)ft_memalloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (ptr[i] != '\0')
	{
		str[i] = ptr[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			*ft_itoa(int n)
{
	int			neg;
	char		*ptr;
	long int	num;
	char		buf[50];

	neg = 0;
	num = n;
	ptr = &buf[49];
	*ptr = '\0';
	if (num == 0)
		*--ptr = '0';
	if (num < 0)
	{
		neg = 1;
		num = num * -1;
	}
	while (num > 0)
	{
		*--ptr = "0123456789"[num % 10];
		num = num / 10;
	}
	if (neg == 1)
		*--ptr = '-';
	return (getstr(ptr));
}
