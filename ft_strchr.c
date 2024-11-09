/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:45:37 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:32:02 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	tofind;

	i = 0;
	tofind = (char )c;
	if (tofind == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == tofind)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
