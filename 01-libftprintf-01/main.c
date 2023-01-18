/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoda-s <antoda-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:15:51 by antoda-s          #+#    #+#             */
/*   Updated: 2023/01/18 15:59:14 by antoda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <limits.h>

int	main(void)
{
	int	a;
	int	c;
	int	v;

	ft_printf("---------------------------------------------------------------\n");
	c = ft_printf("%%\t%c\t%s\t%p\t%#x\t|%#020X|\t%i\t%u\n%s\n", 'c', "tes%%%te", \
	&a, 15, 10, INT_MAX, 0 - 1, "This is sa very long string with mixed chars %%\t%c\t%s\t%p\t%#x\t|%#020X|\t%i\t%u\\%s");
	v = printf("%%\t%c\t%s\t%p\t%#x\t|%#020X|\t%i\t%u\n%s\n", 'c', "tes%%%te", \
	&a, 15, 10, INT_MAX, 0 - 1, "This is sa very long string with mixed chars %%\t%c\t%s\t%p\t%#x\t|%#020X|\t%i\t%u\\%s");
	ft_printf("---------------------------------------------------------------\n");
	ft_printf("%d - %d\n", c, v);
	c = ft_printf("%.4f - %.4e - %a, %.8A\n", 25.17564, 25.17564, 25.17564, 1.111111111111111111111111111111);
	v = printf("%.4f - %.4e - %a, %.8A\n", 25.17564, 25.17564, 25.17564, 1.111111111111111111111111111111);
	ft_printf("---------------------------------------------------------------\n");
	ft_printf("%d - %d\n", c, v);
}
