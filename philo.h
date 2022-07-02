/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:58:16 by mnajid            #+#    #+#             */
/*   Updated: 2022/07/02 16:36:50 by mnajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>

typedef struct s_philosopher
{
	pthread_t		thread_id;
	int				nb_forks;
	int				rang;
	int				right_fork;
	int				left_fork;
	int				nb_eat;
	struct s_data	*data;
}	t_philosopher;

typedef struct s_data{
	int	nb_philosophers;
}	t_data;
#endif

// eat xor sleep xor think
//forks == philosophers
// to eat == you needs two forks right and left
// finish eating --> put forks --> start sleeping --> when awake start thinking again ---> when die stop!
// pilo--> thread 
// protect the fork state with a mutex
