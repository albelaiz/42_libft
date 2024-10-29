/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:22:25 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/29 10:46:05 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	if (c == '\0')
		return (NULL);
	while (i < n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
// int main(){
//     char a[] = "alaebelaiz";
//     int i = 5;
//     printf("%s",memchr(a,'b',i));
// }