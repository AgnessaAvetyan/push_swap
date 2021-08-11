#include "push_swap.h"

int     *SortArray(int *arr, int len)
{
    int i;
    int j;
    int *array;

    i = 0;
    array = initArray(len);
    ft_memcpy(array, arr, len);
    while (i < len)
    {
        j = 0;
        while (j < len - i - 1)
        {
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
            j++;
        } 
        i++;
    }
    return (array);
}

int     already_Sorted(t_stack *A)
{ 
    int len;
    int i; 

    i = 0;
    len = A->size;
    while (i < len - 1 && A->array[i] < A->array[i + 1])
        i++;
    if (i == len - 1)
        return (1);
    return (0);
}

void    SortStack_2number(t_stack* A)
{
    if (!already_Sorted(A))
        sa_sb(A, 1);
}

void    SortStack_3number(t_stack *A)
{
    int min_ind;
    int min;
    
    min_ind = min_index(A); 
    min = A->array[min_ind];
    if (A->array[0] == min)
    {
        sa_sb(A, 1);
        ra_rb(A, 1);
    }
    else if (A->array[1] == min)
    {
        if (A->array[0] < A->array[2])
            sa_sb(A, 1);
        else
            ra_rb(A, 1);
    }
    else if (A->array[2] == min)
    {  
        if (A->array[0] > A->array[1])
            sa_sb(A, 1);
        rra_rrb(A, 1);
    }
}

void    SortStack_5number(t_stack *A, t_stack *B)
{
    int index;
    int min;
    int count;

    count = 0;
    while(A->size > 3)
    {
        index = min_index(A);
        min = A->array[index];
        if (min == A->array[0])
        {
            pa_pb(A, B, 2);
            count++;
        }
        else if(index < A->size / 2)     
            while(min != A->array[0]) 
                ra_rb(A, 1);
        else
            while(min != A->array[0])  
                rra_rrb(A, 1);
    }
    if (!already_Sorted(A))
        SortStack_3number(A);
    while (count-- != 0)
        pa_pb(B, A, 1);
}

void    SortStack(t_stack *A, t_stack* B)
{
    int mid;
    int size;

    mid = get_mid(A);
    size = get_mid_index(A);
    while (size != 0)
    { 
        if (A->array[0] < mid)
        {
            pa_pb(A, B, 2);
            size--;
        }
        else if (A->array[A->size - 1] < mid)
        {
            rra_rrb(A, 1);
            pa_pb(A, B, 2);
            size--;
        }
        else if (A->array[1] < mid)
        {
            sa_sb(A, 1);
            pa_pb(A, B, 2);
            size--;
        }
        else
            ra_rb(A, 1);
    }
    while (A->size > 4)
        SortStack(A, B);
    SortStack_5number(A, B);
}

void    Sort_Back(t_stack *A, t_stack *B)
{
    int max;
    int index;

    while (B->size > 0)
    {
        max = Array_MaxElement(B);
        if (max == B->array[0])
            pa_pb(B, A, 1);
        else if (max == B->array[1])
        {
            sa_sb(B, 2);
            pa_pb(B, A, 1);
        }
        else if (max == B->array[B->size - 1])
            rra_rrb(B, 2);
        else
        {
            index = get_index(B,max);
            if(index > B->size / 2)
                while (max != B->array[0])
                    rra_rrb(B, 2);
            else
                while (max != B->array[0])
                    ra_rb(B, 2);
        }
    }
}