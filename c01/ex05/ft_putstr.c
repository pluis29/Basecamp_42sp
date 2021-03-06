/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpaulo-d <lpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 02:00:09 by lpaulo-d          #+#    #+#             */
/*   Updated: 2021/04/10 15:51:00 by lpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_write(*str);
		str++;
	}
}
