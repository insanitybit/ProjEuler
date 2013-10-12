//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

// Thoughts so far - create for loop with i, check if i is divisible by 3 or 5 (mod) and then, if it is, add i to total.

#include <stdio.h>

int main(void){

int total = 0; // We'll use total to store the sum on each iteration 

int i = 0; // Our counter. Initialized to 0.

for (i;i<1000;i++) //i = 0; 1000 iterations; i + 1 every iteration
{
    if((i%3 == 0) || (i%5 ==0)) //If our counter is divisible by either 3 or 5 we want to take the counter and add it to total
    {
        total += i;
    }
    
}
printf("%d",total);

return 0;
}
