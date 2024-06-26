# Push_swap

Push_swap is a sorting algorithm project that challenges to efficiently sort a stack of integers using a limited set of operations. The goal is to implement two programs: one that generates a list of instructions to sort the stack and another that executes these instructions. The objective is to achieve the sorting with the least number of moves, making it a practical exercise in algorithmic optimization.

## Setup

1. Clone the repository:
    ```sh
    https://github.com/arinatyurina/push_swap.git
    ```
2. Compile the program:

    ```sh
    make
    ```

## Usage

To generate and display the list of instructions:  
<pre> <code> ./push_swap [list of integers] </code></pre>

To check if the instructions successfully sort the stack:  
<pre> <code> ARG="[list of integers]"; ./push_swap $ARG | ./checker_linux $ARG 
</code></pre>

To check how many operations were used:
<pre> <code> ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l </code></pre>

## Sorting Algorithm Description

The push_swap project aims to sort a stack A using a minimal number of operations, utilizing an auxiliary stack B. The algorithm involves the following key steps:

### Initialization:

Start with stack A containing random numbers and stack B empty.

**Basic Moves**:  
sa/sb: Swap the first two elements of stack A/B.  
pa: Push the top element from stack B to stack A.  
pb: Push the top element from stack A to stack B.  
ra/rb: Rotate stack A/B upwards.  
rra/rrb: Rotate stack A/B downwards.  

### Sorting Small Stack (size <= 10):

Identify predefined cases for 3 elements and sort them using minimal moves (e.g., sa, rra, ra).  

**Approximity Method**:  
For larger stacks, identify the smallest element and move it to the top of stack A using the most efficient rotation (ra or rra). Push the smallest element from stack A to stack B. Repeat until stack A is either sorted or reduced to three elements, then sort the remaining elements.

### Sorting Larger Stacks (size > 10 && size <= 100):

Define a key number (key_nbr) to divide stack A into smaller chunks.  
Push elements less than or equal to key_nbr to stack B.  
Continue dividing and pushing until 3/4 of stack A is in stack B.  
Sort stack A and then merge elements back from stack B to stack A by pushing the largest elements first.

### Handling Very Large Stacks (size > 100):

Similar approach but divide stack A into 8 smaller chunks.  
Use the same proximity and pushing methods to sort and merge.  
This algorithm is efficient in reducing the number of moves needed to sort the stack by leveraging strategic rotations, minimal move sorting for small sets, and chunking for larger sets.  
The result is a sorted stack A achieved through a series of well-defined and minimal operations.

