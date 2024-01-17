# Push_swap

## Overview
Push_swap is a sorting algorithm project that challenges you to efficiently sort a stack of integers using a limited set of operations. The goal is to implement two programs: one that generates a list of instructions to sort the stack and another that executes these instructions. The objective is to achieve the sorting with the least number of moves, making it a practical exercise in algorithmic optimization.

### Supported Operations
+ **sa:** Swap the first two elements of stack A.
+ **sb:** Swap the first two elements of stack B.
+ **ss:** Perform sa and sb simultaneously.
+ **pa:** Push the first element of stack A onto stack B.
+ **pb:** Push the first element of stack B onto stack A.
+ **ra:** Rotate stack A - shift all elements up by one.
+ **rb:** Rotate stack B - shift all elements up by one.
+ **rr:** Perform ra and rb simultaneously.
+ **rra:** Reverse rotate stack A - shift all elements down by one.
+ **rrb:** Reverse rotate stack B - shift all elements down by one.
+ **rrr:** Perform rra and rrb simultaneously.

## Usage
### Compilation
`make`

### Execution

To generate and display the list of instructions:  
<pre> <code> ./push_swap [list of integers] </code></pre>

To check if the instructions successfully sort the stack:  
<pre> <code> ARG="[list of integers]"; ./push_swap $ARG | ./checker_linux $ARG 
</code></pre>

To check how many operations were used:
<pre> <code> ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l </code></pre>

## Features
+ Efficient sorting algorithm
+ Minimization of moves
+ Clear and concise code structure
+ Easy-to-understand instructions generation and execution
