/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:29:02 by pgrossma          #+#    #+#             */
/*   Updated: 2023/10/14 20:13:32 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		minus;
	long long	result;

	i = 0;
	minus = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		if (result > LONG_MAX / 10
		|| (result == LONG_MAX / 10 && str[i] - '0' > LONG_MAX % 10))
		{
			if (minus == 1)
				return ((int) LONG_MAX);
			return ((int) LONG_MIN);
		}
		result = result * 10 + minus * (str[i] - '0');
		i++;
	}
	return ((int) result);
}
