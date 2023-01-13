# pushSwap

This project is about sorting data on a stack :

+ Starting with randomly ordered a set of integers on one stack && one empty stack 
+ a limited set of instructions needed to be written to manipulate both stacks.
+ The lowest possible number of actions is used.
+ I used the linked list data structure && Redix sort for the optimized data sorting

Instructions are : 
+ Pushing the topmost value of a stack to the next stack ( pa, pb )
+ Swapping both topmost values of stack a, stack b or both ( sa, sb, ss )
+ Rotating the topmost value of stack a, stack b or both under their bottom ( ra, rb, rr )
+ Rotating the bottommost value of stack a, stack b or both over their top ( rra, rrb, rrr )


Radix sort is an efficient algorithm to sort non-negative integers with time complexity O(n * d) where d = floor(log_b(k) + 1) for base = b 
