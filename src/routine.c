void ft_print(t_data *data, char *str, int index)
{
    pthread_mutex_lock(&(data->printing));
    if(!data->die)
    {
        ft_putnbr_fd(ft_time() - data->beginning_time, 1);
        ft_putchar_fd('\t', 1);
        ft_putnbr_fd(index + 1, 1);
        ft_putchar_fd('\t', 1);
        ft_putstr_fd(str, 1);
        ft_putchar_fd('\n', 1);
    }
    pthread_mutex_unlock(&(data->printing));
}

void ft_start_earing(t_data *data, t_philosopher *philo)
{
    long    start;
    pthread_mutex_lock(&(data->eating));
    ft_print(data, "is eating ", philo->rang);
    philo->check_die_time = ft_time();
    pthread_mutex_unlock(&(data->eating));
    (philo->nb_eat)++;
    start = ft_time();
    while (ft_time() - start < data->time_to_eat)
        usleep(100);
}

int ft_take_fork(t_data *data, t_philosopher *philo)
{
    pthread_mutex_lock(&(data->forks[philo->left_fork]));
    ft_print(data, "has taken a fork", philo->rang);
    pthread_mutex_lock(&(data->forks[philo->right_fork]));
    ft_print(data, "has taken a fork", philo->rang);
    ft_start_eating(data, philo);
    pthread_mutex_unlock(&(data->forks[philo->left_fork]));
    pthread_mutex_unlock(&(data->forks[philo->right_fork]));
    if (data->eat_or_not)
        return(1);
    return (0);
}

void *ft_routine(void *philo)
{
    t_philosopher   *copy;
    t_data  *data;
    long    start;

    copy = (t_philosopher *)philo;
    data = copy->data;
    if(data->nb_philosophers == 1)
    {
        ft_print(data, "has taking a fork", copy->rang);
        usleep(data->time_to_die * 1000);
        return (NULL);
    }
    if (copy->range %2)
        usleep(500);
    while (!data->die)
    {
        if (ft_take_fork(data, copy))
            break;
        ft_print(data, "sleeping ", copy->rang);
        start = ft_time();
        while(ft_time() - start < data->time_to_sleep)
            usleep(100);
        ft_print(data, "thinking", copy->rang);
    }
    return((void *)0);
}