#include "push_swap.h"

int     check(char **argv, int size)
{
    int i;

    i = 1;
    while (i <= size)
    {
        if ((DublicateNumeric(argv, size)))
            return (1);
        i++;
    }
    return (0);
}

void    Sorting(t_stack *A, t_stack *B, int argc, char **argv)
{
    if (check(argv, argc))
    {
        write_comand("Error");
        return ;
    }
    else
    {
        init_Stack_Array(A, argc, argv);
        if(already_Sorted(A))
            return ;
        else if (argc == 2)
            return ;
        else if (argc == 3)
            SortStack_2number(A);
        else if (argc == 4)
            SortStack_3number(A);
        else if (argc == 5 || argc == 6)
        {
            SortStack_5number(A, B);
        }
        else
        {
            SortStack(A, B);
            Sort_Back(A, B);
        }
    }
    f_free(A, B);
}


int main(int argc, char **argv)
{
    t_stack A;
    t_stack B;

    if (argc == 1)
        return (0);  
    else if (argc == 2)
    {
        if (isnumber(argv[1]))
            return (0);
        else
        {
            char    **fake_argv;
            fake_argv = ft_split(argv[1], ' ');
            argc = ft_countword(argv[1], ' ') + 1;
            creatStack(&A, &B, argc);
            Sorting(&A, &B, argc, fake_argv);
            free(fake_argv);
        }
    }
    else
    {
        creatStack(&A, &B, argc);  
        Sorting(&A, &B, argc, argv);
    }
    return (0);
}