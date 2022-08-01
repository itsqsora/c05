/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:08:07 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 10:21:23 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	ret = 1;
	while (nb)
		ret *= (nb--);
	return (ret);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
