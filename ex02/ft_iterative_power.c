/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:10:07 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 10:27:29 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	ret = nb;
	while (--power)
		ret *= nb;
	return (ret);
}
/*
int	main(void)
{
	printf("%d",ft_iterative_power(10, 0));
}*/
