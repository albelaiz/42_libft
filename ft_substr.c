/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:43:17 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:34:08 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = ft_strlen(s);
	dst = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	if (start + len > len_s)
		return (NULL);
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	return (dst);
}
