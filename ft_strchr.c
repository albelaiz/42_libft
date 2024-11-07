/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:45:37 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/04 15:40:34 by albelaiz         ###   ########.fr       */
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
//  int main(){
//          char a[] = "alaebelaiz";
//          int b = 'a';
//          printf("%s",ft_strchr(a,b));
// }