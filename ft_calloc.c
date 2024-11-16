/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:29:31 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/15 19:54:24 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	void	*ptr;

	if (cont == 0 || size == 0)
		return (malloc(0));
	if (cont > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(cont * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, cont * size);
	return (ptr);
}
