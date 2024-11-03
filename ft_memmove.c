/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:18:08 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/31 12:33:37 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	s2 = (const char *)src;
	if (s1 > s2)
	{
		while (n > 0)
		{
			s1[n] = s2[n];
			n--;
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (dst);
}
// int	main(void)
// {
// 	char a[] = "alae";
// 	printf("%s", ft_memmove(a + 2, a, 2));
// }