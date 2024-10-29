/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:11:33 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/29 11:08:14 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (i < num)
	{
		str[i] = (char)value;
		i++;
	}
	return (ptr);
}
// int main(){
//     char a[] = "alaebelaizi";
//     char b = '.';
//     int num = 20;
//     printf("%s",ft_memset(a,b,num));
// }