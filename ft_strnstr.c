/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:46:20 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/29 13:12:22 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t		j;
// 	size_t		k;
// 	const char	*str;
// 	const char	*to_find;

// 	j = 0;
// 	k = 0;
// 	str = (char *)haystack;
// 	to_find = (char *)needle;
// 	while(str[j + k] && j < len)
// 	{
// 		k = 0;
// 		while(str[j + k] == to_find[k] && str[j + k])
// 		{
// 			k++;
// 			if (to_find[k] == '\0')
// 				return ((char *)&str[j]);		
// 		}
// 		j++;
// 	}
// 	return (NULL);
// }
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	while (haystack[i + j] && i < len)
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i+j] == needle[j])
			{	j++;
				if (needle[j] == '\0')
					return (&haystack[j])
			}
		}
	}
}
int main(){
	// char a[] = "alaebelaiz";
	// char b[] = "belaiz";
	printf("%s",strnstr("1234belaiz","belaiz",5));
	
}