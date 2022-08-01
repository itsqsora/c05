/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <sorungta@42bangkok.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 07:12:21 by mac               #+#    #+#             */
/*   Updated: 2022/08/01 10:44:50 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	i = 5;
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_is_prime(19));
}*/
