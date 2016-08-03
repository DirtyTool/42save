/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lec.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 23:35:57 by gleclerc          #+#    #+#             */
/*   Updated: 2016/08/03 23:57:49 by gleclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int 	ft_nputchar(char c,int n)
{
	int i;

	i = 0;
	while (i < n)
		{
			ft_putchar(c);
			i = i + 1;
		}
	return (0);
} 

int 	main()
{
	ft_nputchar ('@', 42);
	ft_putchar ('\n');
	return (0);
}

