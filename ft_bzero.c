/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:02:43 by albelaiz          #+#    #+#             */
/*   Updated: 2024/10/29 10:36:57 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, 0, n);
}
// int main(){
//     char a[] = "alaebilaizi";
//     // Print string 9bel bzero
//     printf("9bel: %s\n", a);
//     // Apply bzero
//     ft_bzero(a, 5);
//     // Print string men be3d bzero
//     printf("men be3d: %s\n", a);
//     return 0;
// }