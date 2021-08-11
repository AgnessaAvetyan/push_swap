#include "push_swap.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (sign * number < -2147483648 || sign * number > 2147483647)
	{
		write_comand("Error");
		exit(0);
	}	
	return (number * sign);
}

int		isnumber(char* arg)
{
	int i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (arg[i]  == 45)
		{
			if(arg[i + 1] == 48)
				return (0);
			i++;
		}
		if (arg[i] < 48 || arg[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

int		DublicateNumeric(char **argv, int len)
{
	int i;
	int j;
	int *array;

	i = 1;
	j = 0;
	array = initArray(len);
	while(i < len)
	{
		if (!(isnumber(argv[i])))
            return (1);
		array[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while(j < len - 1)
		{
			if(array[i] == array[j])
			{
				free(array);
				return (1);
			}
			j++;
		}
		i++;
	}
	free(array);
	return (0);
}