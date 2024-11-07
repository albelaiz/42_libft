/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelaiz <albelaiz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:19:04 by albelaiz          #+#    #+#             */
/*   Updated: 2024/11/05 17:14:02 by albelaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int i = 0;
	while (s[i]){
		f(i,&s[i]);
		i++;
	}
}
// void to_upper(unsigned int i, char *c) {
//     if (*c >= 'a' && *c <= 'z') {
//         *c = *c - 32;
//     }
// }
// int main(){
// 	char a[] = "hello";
// 	ft_striteri(a, to_upper);
// 	printf("%s\n", a);
// }