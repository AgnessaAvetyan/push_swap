#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct  stack
{
    int size;
    int *array;
}               t_stack;

int             *initArray(int size);
int             *SortArray(int *arr, int len);
int             ft_atoi(const char *str);
int             isnumber(char* arg);
int             DublicateNumeric(char **argv, int len);
int             min_index(t_stack *a);
int             get_mid(t_stack *stack);
int             get_mid_index(t_stack *stack);
int             get_index(t_stack *stack, int num);
int             already_Sorted(t_stack *A);
int             Array_MaxElement(t_stack *stack);
int             ft_countword(char *s, char c);
int             ft_wordlen(char *s, char c);

char            **ft_free(char **a);
char            **ft_split(char const *s, char c);
char            *ft_strncpy(char *dest, const char *src, size_t n);

void            creatStack(t_stack *stack1, t_stack *stack2, int argc);
void            f_free(t_stack *stack1, t_stack *stack2);
void            init_Stack_Array(t_stack *A, int argc, char **argv);
void            write_comand(char *str);
void            swap(int *a, int *b);
void            sa_sb(t_stack *stack, int value);
void            ra_rb(t_stack *stack, int value);
void            rra_rrb(t_stack *stack, int value);
void            pa_pb(t_stack *stack1, t_stack *stack2, int value);
void            SortStack_2number(t_stack* A);
void            SortStack_3number(t_stack *A);
void            SortStack_5number(t_stack *A, t_stack *B);
void            SortStack(t_stack *A, t_stack* B);
void            Sort_Back(t_stack *A, t_stack *B);
void            Sorting(t_stack *A, t_stack *B, int argc, char **argv);
void            *ft_memcpy(int *dest, int *src, int num);

#endif