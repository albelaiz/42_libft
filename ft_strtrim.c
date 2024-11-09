/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:01:14 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:33:54 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		size;
	char	*str;
	int		k;

	j = strlen(s1) - 1;
	i = 0;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	while (j >= i && strchr(set, s1[j]))
		j--;
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
