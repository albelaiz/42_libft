/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:10:14 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/04 12:00:43 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	dst = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dst == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dst[i] = s2[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
// int	main(void)
// {
// 	char	a[] = "alae";
// 	char	b[] = "belaizi";

// 	printf("%s", ft_strjoin(a, b));
// 	return (0);
// }