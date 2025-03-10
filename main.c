/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedfousi <pedfousi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:14:34 by pedfousi          #+#    #+#             */
/*   Updated: 2025/03/10 21:14:51 by pedfousi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int		number;
	char	*pointer;

	number = -150;
	*pointer = "little";
	printf("Here is a number-%4d-and a-%10s-word.\n", number, pointer);
	printf(" %-10d \n", number);
	printf(" %010d \n", number);
	printf(" %-#10x \n", number);
	printf(" %#x \n", number);
	printf(" %.d \n", number);
}
