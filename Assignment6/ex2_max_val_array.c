#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "ex2_max_val_array.h"
int max(int* numbers, int size)
{
    /*Pre:
    max_val is the first element in the array
    An interger current to keep hold with the current value in the array
    size > 0. means the array is never empty
    */
    assert(size > 1);
    assert(numbers != NULL);
    int current;
    int max_val = numbers[0];
    /* Loop invariant: 
   Before each iteration of the loop, max_val holds the maximum value 
   of numbers[0] to numbers[i-1].
    */
    for (int i = 1; i < size; i++)
    {
        current = numbers[i];
        
        if (current > max_val)
        {
            assert(current > max_val);
            max_val = current;
        }
    }
    /*Post:
    max_val is the maximum value in the array
    */
    assert(max_val > current);
    return max_val;
}


int main(void)
{
/*Pre:
size>=0
size is an integer
numbers is an array
*/
int numbers[] = {5,7,4,34,67,83,1,3};
int size = sizeof(numbers) / sizeof(numbers[0]);  // Beregn størrelsen af arrayet

int max_val_arr = max(numbers, size);
printf("Maximum value in the array is %d\n", max_val_arr);


/*Post:
Prints out the maximum value in the array

*/
    return 0;
}

