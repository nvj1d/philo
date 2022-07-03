/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:58:16 by mnajid            #+#    #+#             */
/*   Updated: 2022/07/03 14:22:46 by mnajid           ###   ########.fr       */
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
	long long		check_die_time;
	struct s_data	*data;
}	t_philosopher;

typedef struct s_data{
	int				nb_philosophers;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				number_of_times;
	int				die;
	int				eat_or_not;
	long long		beginning_time;
	pthread_mutex_t	*forks;
	pthread_mutex_t	eating;
	pthread_mutex_t	printing;
	t_philosopher	*philo;
}	t_data;

//utils:
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_erreur(int a);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
int			ft_check_digits(char *str);
int			ft_check_argument(int argc, char **argv);
long long	ft_time(void);

//init:
int			ft_initialise_mutex(t_data *data);
int			ft_initialise_philo(t_data *data);
static int	ft_check_positive(t_data *data);
int			ft_initialise(t_data *data, char **av, int ac);

//free
void		ft_free(t_data *data);
#endif
