/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 09:17:33 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 10:53:11 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
