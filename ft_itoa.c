/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:39:09 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:29:49 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_n(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nb;

	nb = n;
	i = ft_len_n(n);
	str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (nb < 0)
		str[0] = '-';
	nb = nb * -1;
	if (nb >= 10)
	{
		while (nb > 0)
		{
			str[i - 1] = nb % 10 + 48;
			nb = nb / 10;
			i--;
		}
	}
	return (str);
}
