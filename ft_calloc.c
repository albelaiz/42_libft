/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:29:31 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/11 18:31:30 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	void	*ptr;

	ptr = malloc(cont * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, cont * size);
	return (ptr);
}
