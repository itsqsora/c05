/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:11:48 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 12:29:09 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	long long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(268435456));
	printf("%d\n", ft_sqrt(134167199));
	printf("%d\n", ft_sqrt(90935296));
	printf("%d\n", ft_sqrt(92260));
	printf("%d\n", ft_sqrt(716632900));
	printf("%d\n", ft_sqrt(62904750));
	printf("%d\n", ft_sqrt(1545040249));
	printf("%d\n", ft_sqrt(70765342));
	printf("%d\n", ft_sqrt(68807025));
	printf("%d\n", ft_sqrt(46629167));
	return (0);
}*/
