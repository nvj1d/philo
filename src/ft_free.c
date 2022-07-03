void ft_free(t_data *data)
{
    if (!data->philo)
        free(data->philo)
    if(!data->forks)
        free(data->forks)
}