/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnajid <mnajid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:58:16 by mnajid            #+#    #+#             */
/*   Updated: 2022/07/02 15:17:36 by mnajid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_philosopher
{
	int	rang;
}	t_philosopher;

#endif

// eat xor sleep xor think
//forks == philosophers
// to eat == you needs two forks right and left
// finish eating --> put forks --> start sleeping --> when awake start thinking again ---> when die stop!
// pilo--> thread 
// protect the fork state with a mutex
