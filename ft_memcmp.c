/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:45:21 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:32:18 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*st1;
	const char	*st2;

	i = 0;
	st1 = (const char *)s1;
	st2 = (const char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (st1[i] == st2[i] && i < n && st1[i] != '\0' && st2[i] != '\0')
	{
		i++;
	}
	return (st1[i] - st2[i]);
}
