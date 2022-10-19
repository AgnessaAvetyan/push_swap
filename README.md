# Push_Swap

# :book: About 

The **push_swap** program calculates the moves to sort the integers – pushing, popping, swapping and rotating them between stack a and stack b – and displays those directions on the stdout.<br /> 

Sort a random list of integers using the smallest number of moves, 2 stacks and a limited set of operations. 

You start with two empty stacks: a and b. You are given a random list of integers via command line arguments. 

Only these moves are allowed:

**sa** : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements).<br />
**sb** : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements).<br />
**ss** : sa and sb at the same time.<br />
**pa** : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.<br />
**pb** : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.<br />
**ra** : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.<br />
**rb** : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.<br />
**rr** : ra and rb at the same time.<br />
**rra** : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.<br />
**rrb** : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.<br />
**rrr** : rra and rrb at the same time.<br />

At the end, stack b must empty empty and all integers must be in stack a, sorted in ascending order. 

### The program must mandatorily parse.
-input for errors<br />
-including empty strings<br />
-no parameters<br />
-non-numeric parameters<br />
-duplicates<br />
-invalid/non-existent instructions<br />

### **Push_Swap** must conform to the 42 Norm. 

Using normal libc functions is strictly forbidden.<br />
Allowed to use: **write**, **read**, **malloc**, **free**, **exit**.<br />
It must not have any memory leaks. Errors must be handled carefully. <br />
In no way can it quit in an unexpected manner (segmentation fault, bus error, double free, etc).

# :computer: Usage

Run **make**.

The program is used in the same way.

  ./push_swap 5 2 3 1 4 <br />
  ./push_swap "-50 -400 -20 -1 -100" <br />
  ./push_swap "-22" "35" "40" "-15" "75" <br />
  ./push_swap <random 100/500 numbers> <br />
