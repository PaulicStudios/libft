/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrossma <pgrossma@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:57:03 by pgrossma          #+#    #+#             */
/*   Updated: 2023/10/16 13:37:09 by pgrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i;
	size_t len_s;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len_s = 0;
	else
		len_s = ft_strlen(s + start);
	if (len > len_s)
		len = len_s;
    i = 0;
    ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
        return(0);
	if (len > 0)
	{
		while (s[start] != '\0' && i < len)
		{
			ptr[i] = s[start];
			start++;
			i++;
		}
	}
    ptr[i] = '\0';
    return(ptr);
}
