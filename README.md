# push_swap
1. What to implement
 .A program that sorts input numbers using a data structure consisting of two stacks, A and B, and given instructions.

   Initially, numbers are inserted in the order they were entered in A, and after sorting, they should be stored in A.
  (The small number should be on the top.)

  .It uses 11 commands to sort, and it should be used as a minimum.

    sa : swaps the upper two elements of a.
    sb : swaps the upper two elements of a.
    ss : Executes sa and sb at the same time.
    pa : Insert the top of b into a.
    pb : Insert the top of a into b.
    ra : shift up a.
    rb : shift up b.
    rr : Executes ra and rb at the same time.
    rra : shift down a.
    rrb : shift down b.
    rrr : Executes ra and rb at the same time.
  .The number given as a command argument is within the range of int type, and if this is not satisfied, an Error should be output.

2. Implementation

 1.Command argument preprocessing

  Extracting a number from a string using the atoi function

  Extracts numbers that can be extracted by skipping white space in one string.

  If white space and a non-numeric string exist, it returns a number outside of int type, and the function that called atoi additionally handles an exception.

  2.Sort

  Since it does not use an array data structure that can be accessed by ramdom, a new algorithm different from the general sorting algorithm is required.

  Also, although two stacks are available data structures, the space below the stack can also be used through the r command.

  However, since the sorted numbers need to be stored at the bottom of A, there are actually three places that can be used for sorting.
  
  
