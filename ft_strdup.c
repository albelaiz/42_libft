/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:37:30 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/01 13:28:11 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*ptr;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	ptr = (char *)(malloc(len + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// int main(){
// 	char a[] = "alae";
// 	char *dup = strdup(a);
// 	if (dup != NULL){
// 	printf("%s",dup);
// 	free(dup);
// 	}
// 	return 0;
// }