/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:39:09 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/07 10:44:12 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char *str;
	int i = 0;
	int nb = n;

	while (nb > 0)
	{
		nb = bn / 10;
		i++;
	}
	str = (char *)malloc(i + 1);
	
}