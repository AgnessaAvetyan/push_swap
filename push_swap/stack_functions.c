#include "push_swap.h"

int     *initArray(int size)
{
    int *array;
    if (!(array = (int *)malloc(size * sizeof(int))))
        exit(0);
    return (array);
}

void    creatStack(t_stack *stack1, t_stack *stack2, int argc)
{
    stack1->size = argc - 1;
    stack1->array = initArray(argc - 1);
    stack2->size = 0;
    stack2->array = initArray(argc - 1);
}

void    f_free(t_stack *stack1, t_stack *stack2)
{
    free(stack1->array);
    free(stack2->array);
}

void    init_Stack_Array(t_stack *A, int argc, char **argv)
{
    A->array[argc - 1] = '\0';                                                                                                                                                                                                                                                                
    while(argc != 1)
    {
        A->array[argc - 2] = ft_atoi(argv[argc - 1]);
        argc--;
    }
}