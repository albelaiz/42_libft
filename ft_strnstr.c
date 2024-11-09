/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:46:20 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:31:31 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		j;
	size_t		k;
	const char	*str;
	const char	*to_find;

	j = 0;
	str = (char *)haystack;
	to_find = (char *)needle;
	if (to_find[0] == '\0')
		return ((char *)&str[j]);
	while (str[j] && j < len)
	{
		k = 0;
		while (str[j + k] == to_find[k] && j + k < len)
		{
			k++;
			if (to_find[k] == '\0')
				return ((char *)&str[j]);
		}
		j++;
	}
	return (NULL);
}
