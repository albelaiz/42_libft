/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:29:31 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/02 13:43:01 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	void	*ptr;

	if (cont == 0 || size == 0)
		return (NULL);
	ptr = malloc(cont * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, cont * size);
	return (ptr);
}
// int	main(void)
// {
// 	char *str = ft_calloc(5 ,sizeof(int));
// 	printf("%s\n",str);

// }
