/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:58:16 by mnajid            #+#    #+#             */
/*   Updated: 2022/07/02 20:05:44 by mnajid           ###   ########.fr       */
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
	int time_to_die;
	int time_to_eat;
	int	time_to_sleep;
	int	number_of_times;
	int die;
	int	eat_or_not;
	long long	beginning_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	eating;
	pthread_mutex_t	printing;
	t_philosopher	*philo;
}	t_data;

// ft_isdigit
// ft_atoi
// ft_checkargument
#endif

// eat xor sleep xor think
//forks == philosophers
// to eat == you needs two forks right and left
// finish eating --> put forks --> start sleeping --> when awake start thinking again ---> when die stop!
// pilo--> thread 
// protect the fork state with a mutex
