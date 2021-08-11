#include "push_swap.h"

void    write_comand(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void	*ft_memcpy(int *dest, int *src, int num)
{
	int	*temp;
	int	*temp1;

	temp = (int*)dest;
	temp1 = (int*)src;
	while (num--)
		*temp++ = *temp1++;
	return (dest);
}

void    swap(int *a, int *b)
{
    int temp ;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int		min_index(t_stack *a)
{
	int i;
	int min;
	int index;

	i = 1;
    index = 0;
	min = a->array[0];
	while (i < a->size)
	{
		if (a->array[i] < min)
		{
			min = a->array[i];
			index = i;
		}
		i++;
	}
	return (index);
}

int		get_mid(t_stack *stack)
{
    int *helper;

    helper = initArray(stack->size);
    helper = SortArray(stack->array, stack->size);
    return (helper[stack->size / 4]);
}

int		get_mid_index(t_stack *stack)
{
    int i;
    int number;
    int *helper;

	i = 0;
    helper = initArray(stack->size);
    helper = SortArray(stack->array, stack->size);
    number = get_mid(stack);
    while(i < stack->size)
    {
        if(helper[i] == number)
            return (i);
        i++;
    }
    exit(0);
}


int		Array_MaxElement(t_stack *stack)
{
	int i;
	int max;

	i = 1;
	max = stack->array[0];
	while(i < stack->size)
	{
		if (stack->array[i] > max)
			max = stack->array[i];
		i++;
	}
	return (max);
}

int		get_index(t_stack *stack, int num)
{
	int i;
	
	i = 0;
	while(i < stack->size)
	{	
		if (stack->array[i] == num)
			return (i);
		i++;
	}
	exit(0);
}