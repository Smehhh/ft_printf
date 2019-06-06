/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgueren <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 13:24:38 by wgueren           #+#    #+#             */
/*   Updated: 2019/04/10 10:29:54 by dlabadie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>





int		main()
{

	char	*nick = "\twgueren";
	ft_printf("%x\n", 42);
	ft_printf("%x\n", 0);
	ft_printf("%x", -42);
	//printf("\n%x\n", 198);
	//printf("\n%X\n", 198);

	
	//ft_printf("\n%x\n", 198);
	//ft_printf("\n%X\n", 198);

	//printf("\n%-0x\n", 198);
	//printf("\n%-0X\n", 198);
	/*ft_printf("\n%\n");
	printf("%o\n", 1234);
	ft_printf("%o\n", 1234);

	printf("% 8o\n", 1234);
	ft_printf("% 8o\n", 1234);

	printf("% -8o\n", 1234);
	ft_printf("% -8o\n", 1234);

	printf("% 24.12o\n", 1234);
	ft_printf("% 24.12o\n", 1234);

		printf("% +8.12o\n", 1234);
	ft_printf("% +8.12o\n", 1234);

		printf("% 08.12o\n", 1234);
	ft_printf("% 08.12o\n", 1234);

	printf("% 8.12o\n", 1234);
	ft_printf("% 8.12o\n", 1234);

	printf("%-o\n", 1234);
	ft_printf("%-o\n", 1234);

	printf("%+o\n", 1234);
	ft_printf("%+o\n", 1234);

	printf("% -o\n", 1234);
	ft_printf("% -o\n", 1234);


	printf("\n% 5x\n", 198);
	printf("\n% 5X\n", 198);
	ft_printf("\n% 5x\n", 198);
	ft_printf("\n% 5X\n", 198);

	printf("\n%19.5x\n", 198);
	printf("\n%19.5X\n", 198);
	ft_printf("\n%19.5x\n", 198);
	ft_printf("\n%19.5X\n", 198);

	printf("\n%-19.5x\n", 198);
	printf("\n%-19.5X\n", 198);
	ft_printf("\n%-19.5x\n", 198);
	ft_printf("\n%-19.5X\n", 198);

	printf("\n%+19.5x\n", 198);
	printf("\n%+19.5X\n", 198);
	ft_printf("\n%+19.5x\n", 198);
	ft_printf("\n%+19.5X\n", 198);

	printf("\n%019.5x\n", 198);
	printf("\n%019.5X\n", 198);
	ft_printf("\n%019.5x\n", 198);
	ft_printf("\n%019.5X\n", 198);

	printf("\n% 19.5x\n", 198);
	printf("\n% 19.5X\n", 198);
	ft_printf("\n% 19.5x\n", 198);
	ft_printf("\n% 19.5X\n", 198);

	printf("\n%.5x\n", 198);
	printf("\n%.5X\n", 198);
	ft_printf("\n% .5x\n", 198);
	ft_printf("\n% .5X\n", 198);


	printf("\n% .5x\n", 198);
	printf("\n% .5X\n", 198);
	//ft_printf("\n% .5d\n", 198);
	//ft_printf("\n% .5d\n", 198);

	ft_printf("\n% .5x\n", 198);
	ft_printf("\n% .5X\n", 198);
	//printf("\n%12.5x\n", 198);
	//printf("\n%12.5X\n", 198);

	//ft_printf("\n% x\n", 198);
	//ft_printf("\n% X\n", 198);
//	char	sim = 'W';
//	int	digital = 42;
//
//	double d = 16.0001308918001079462101188255;
//	float f = 328.23;
//	int		*ptr;
//	int		i;
//
//
//
//	i = 0;
//	unsigned int a = 10;
//	unsigned int *b = &a;
//	ptr = (int *)ft_memalloc(sizeof(int) * 5);
//
//
	double		gta = 42.042;
//
//	const int M = 4, N = 42;



	/*ft_printf("ft_printf: %4.12s\n", nick);
	printf("printf   : %4.12s\n", nick);

//	ft_printf("ft_printf: |%c|\n", *nick);
//	printf("printf   : |%c|\n", *nick);
//
//	ft_printf("ft_printf: |%4c|\n", *nick);
//	printf("printf   : |%4c|\n", *nick);
//
//	ft_printf("ft_printf: |%-4c|\n", *nick);
//	printf("printf   : |%-4c|\n", *nick);
//
//	ft_printf("ft_printf: |%c|\n", *nick);
//	printf("printf   : |%c|\n", *nick);



	/*char format[M][N] = {
			"|%42d|\n",
			"|%d|\n",
			"|%+-ld|\n",
			"|%+-ld|\n",
			"|%      ld|\n",
			"|%00000ld|\n",
			"|% ld|\n"
	};




	for (int j = 0; j < M && j < 0 * (M + 1); j++)
	{
		ft_printf((const char *)format[j], 42);
	}*/

//	double gta = -0.0042042;

	//ft_printf(" >>>> |%42f| <<<<", gta);
	/*ft_printf(" >>>> |%d|<<<<\n", 6);
	printf(" \n>>>> |%d|<<<<\n", 6);
	ft_printf(" >>>> |%042.567f%f%f%f%f%f%f|<<<<\n", gta, gta, gta, gta, gta, gta, gta);
	printf(" >>>> |%042.567f%f%f%f%f%f%f|<<<<\n", gta, gta, gta, gta, gta, gta, gta);
	//ft_printf("%d%d", 5, 3);
//	printf("chenged\n");
//	ft_printf("%5.6d %7.8d\n", 5, 3);
//	   printf("%42d %7.8d\n", 5, 3);
//
	ft_printf(" >>>> |%12f%f%f%f%f%f%f|<<<<\n", gta, gta, gta, gta, gta, gta, gta);
	printf(" >>>> |%12f%f%f%f%f%f%f|<<<<\n", gta, gta, gta, gta, gta, gta, gta);

	ft_printf("|%42d|\n", 5);
	printf("\n\n");
	printf("|%42d|\n", 5);
	printf("\n\n");

	printf("|%     d|\n", 5);
	ft_printf("|%    d|\n", 5);
	printf("\n\n");


	printf("%-d\n", 5);
	ft_printf("%-d\n", 5);
	printf("\n\n");

	printf("%+6.4d\n", 5);
	ft_printf("%+6.4d\n", 5);
	printf("\n\n");



	ft_printf("% 20.2d\n", 20);
	printf("% 20.2d\n", 20);
	printf("\n\n");

	ft_printf("% 3.2d\n", 20);
	printf("% 3.2d\n", 20);
	printf("\n\n");

	printf("\n?????????????????????????????????????????????????????????????????????\n");

	ft_printf("|%42u|\n", 5);
	printf("\n\n");
	printf("|%42u|\n", 5);
	printf("\n\n");

	printf("|%     u|\n", 5);
	ft_printf("|%    u|\n", 5);
	printf("\n\n");


	printf("%-u\n", 5);
	ft_printf("%-u\n", 5);
	printf("\n\n");

	printf("%+6.4u\n", 5);
	ft_printf("%+6.4u\n", 5);
	printf("\n\n");



	ft_printf("% 20.2u\n", 20);
	printf("% 20.2d\n", 20);
	printf("\n\n");

	ft_printf("% 3.u\n", 20);
	printf("% 3.u\n", 20);
	printf("\n\n");




	ft_printf("% 3.u\n", 20);
	printf("% 3.u\n", 20);
	printf("\n\n");

ft_printf("% .u\n", 20);
	printf("% .u\n", 20);
	printf("\n\n");

ft_printf("% 1.23u\n", 20);
	printf("% 1.23u\n", 20);
	printf("\n\n");

	ft_printf("% .2u\n", 20);
	printf("% .2u\n", 20);
	printf("\n\n");*/
	//ft_printf("%d", -66);
	//ft_printf("%6dTTTTTTTTT", 66);
	//printf("%6d", 66);
	//printf("\n%ld", 123456789066);
	//printf("\n%d", +66);
	//ft_printf(" >>>> |% f|<<<<\n", gta);
	//printf(" >>>> |% f|<<<<\n", gta);

	return(0);
}
