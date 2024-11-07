/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:19:09 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/05 09:40:14 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static char	codee(unsigned int i, char c)
// {
// 	return (c + i);
// }

// int	main(void)
// {
// 	char	(*f)(unsigned int, char) = codee;
// 	char	*result = ft_strmapi("aaAA", f);

// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }