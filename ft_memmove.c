/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:18:08 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/30 16:43:54 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s1 > s2){
	while (n--)
		s1[n] = s2[n];
}
	else
			ft_memcpy(s1,s2,n);
	return (s1);
}
int main(){
	char a[] = "alae";
	printf("%s",ft_memmove(a + 2,a,4));
}