/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:29:31 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/08 16:32:45 by albelaiz         ###   ########.fr       */
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
