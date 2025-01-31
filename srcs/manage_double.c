/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_double.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvirga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 06:16:27 by gvirga            #+#    #+#             */
/*   Updated: 2018/12/01 18:23:21 by gabriele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*ft_dtoa(double nbr, int precision)
{
	char	*str;
	int		dpart;

	str = ft_itoa((int)nbr);
	dpart = nbr - (double)(int)nbr;
	if (precision != 0)
	{
		str = ft_strjoin_free(str, ".", 1);
		dpart = dpart * ft_ipower(10, precision);
		ft_strjoin_free(str, ft_itoa((int)dpart), 3);
	}
	return (str);
}
