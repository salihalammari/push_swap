# push_swap
Push_Swap Tutorial

Push_swap is an algorithm project at school 42. I’ll introduce this project briefly and share an algorithm to solve it : radix sort.
Advantages of this algorithm : easy to implement, stable
Disadvantages of this algorithm : passable but won’t get full score (unless you can find a way to optimize it)

Introduction:

First, we start with two stacks called A and B.

A is filled with some random integers (without duplicate) and B is empty. We can perform certain instructions on these stacks, and the goal is to sort all these integers with the least instructions possible.
If the original stacks look like this
Push_swap
The outline of this project and the establishment of the concept to proceed with the project

Project Introduction
target
Push_swapis a project about sorting, a very simple and effective algorithm. You are given a set of integer values, two stacks, and a set of instructions for manipulating both stacks. push_swapThe goal is to compute the smallest program using a command that sorts the input integer arguments and print it to the output. The point is to scrutinize and manipulate the different types of algorithms to choose the best solution for an optimized collation. 복잡도Here , we will look at the concept of the basic algorithm .

permissible function
write
read
malloc
free
exit
rule
abIt has two stacks named and and sorts the arguments on the stack in aascending order.

The game starts with the following conditions:

ahas any number that is either negative or positive that does not overlap with each other.
bis empty
You can perform the following operations to sort:

sa: - Swaps the positions of the top two elements on the swap astack . a(do nothing if none or only one element)
sb: - Swaps the positions of the top two elements on the swap bstack . b(do nothing if none or only one element)
ss: Performs saand sbat the same time.
pa: push a- Takes bthe top element from the stack and aputs it at the top of the stack. b( do nothing if stack is empty)
pb: push b- Takes athe top element from the stack and bputs it at the top of the stack. a( do nothing if stack is empty)
ra: rotate a- Moves all elements of the stack aup by 1. The first element becomes the last element.
rb: rotate b- Moves all elements of the stack bup by 1. The first element becomes the last element.
rr: Performs raand rbat the same time.
rra: reverse rotate a- Moves all elements of the stack adown by 1. The last element becomes the first element.
rrb: reverse rotate b- Moves all elements of the stack bdown by 1. The last element becomes the first element.
rrr: Performs rraand rrbat the same time.
example
Init a and b:
2
1
3
6
5
8
_ _
a b

Exec sa:
1
2
3
6
5
8
_ _
a b

Exec pb pb pb:
6 3
5 2
8 1
_ _
a b

Exec ra rb (equiv. to rr):
5 2
8 1
6 3
_ _
a b

Exec rra rrb (equiv. to rrr):
6 3
5 2
8 1
_ _
a b

Exec sa:
5 3
6 2
8 1
_ _
a b

Exec pa pa pa:
1
2
3
5
6
8
_ _
a b
Precautions
push_swapYou have to write a program named . This program receives the values ​​to be put on the stack aas an argument by formatting it in the form of an integer list. The first argument is the top of the stack.
aThe program must print the list of instructions with the smallest number possible to sort the stack .
Commands \nmust be separated only by .
The goal is to sort the stack with as few instruction sets as possible. During evaluation, the number of instructions derived from the program is compared with the maximum number of operations allowed. If the program displays a list that is too large, or if the list is not sorted properly, you will not get points.
In case of an error, Errorand a newline should be printed to standard error. Errors include the following examples: Some argument is not an integer, exceeds a range of integers, or has duplicates.
checker_OSIf the program KOprints , push_swapit means that the list of instructions in ' did not sort the list of integers.
