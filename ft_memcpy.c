/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:48:08 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:27:17 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	i = 0;
	s1 = (char *)dst;
	s2 = (const char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (dst);
}
