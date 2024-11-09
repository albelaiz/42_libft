/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:36:23 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:31:53 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < len_dst)
		return (dstsize + ft_strlen(src));
	while (i < dstsize && dst[i] != '\0')
		i++;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
