/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clt_grd <clt_grd@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 10:44:42 by gclement          #+#    #+#             */
/*   Updated: 2022/11/19 11:52:10 by clt_grd          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_nb(int nb)
{
	int		i;

	i = 0;
	if (nb < 0)
		i++;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		temp;

	temp = n;
	if (n < 0)
		n *= -1;
	i = count_nb(n);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (temp > 0)
		i--;
	str[i--] = '\0';
	while (i > 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	str[i] = n + '0';
	if (temp < 0)
		str[0] = '-';
	return (str);
}
