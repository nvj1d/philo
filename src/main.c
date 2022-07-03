/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:38:38 by mnajid            #+#    #+#             */
/*   Updated: 2022/07/02 15:20:10 by mnajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	main(int ac, char **av)
{
	if (ac ==  5 || ac == 6)
	{
		data = (t_data *)malloc(sizeof(t_data));
		if (!data)
			return(1);
		if (ft_check_argument(ac, av) == 1 \
				|| ft_initialise(data, av, ac))
				{
					ft_free(data);
					printf("Error!\n");
					return(1);
				}
		ft_run(dat, data->philo);
		ft_free(data);
	}
	else
	{
		printf("the syntax is: NF ttd tte tts [Ntfe]");
	}
}