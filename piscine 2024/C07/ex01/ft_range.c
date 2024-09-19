/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 00:32:45 by alazizi           #+#    #+#             */
/*   Updated: 2024/09/19 07:02:50 by alazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	idx;

	if (min >= max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min));
	idx = -1;
	while (++idx < max - min)
		range[idx] = idx + min;
	return (range);
}
