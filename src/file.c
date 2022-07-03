void    ft_putnbr_fd(int n, int fd)
{
    char    c;
    long    nb;

    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb *=-1;
    }
    if (nb >= 0 && nb <= 9)
    {
        c = c + 48;
        write(fd, &c, 1);
    }
    else
    {
        ft_putnbr_fd(nb/10, fd);
        ft_putnbr_fd(nb%10, fd);
    }
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_erreur(int a)
{
	if (a == 1)
		printf("Argument non valid\n");
	if (a == 2)
		printf("Thread not initialised\n");
}
