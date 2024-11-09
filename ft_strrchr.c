/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:56:41 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:31:26 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		len;
	char	tofind;

	tofind = (char)c;
	len = ft_strlen(str);
	i = len - 1;
	if (tofind == '\0')
		return ((char *)&str[i]);
	while (i >= 0)
	{
		if (str[i] == tofind)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
