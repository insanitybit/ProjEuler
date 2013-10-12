/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
 */


/*

OK, so. This was a huge pain in the ass because I suck at math and never went ot my algebra classes in high school.

I kept trying to test every number to see if it's a prime. I did this in a stupid way.

Turns out that your greatest common prime for your original number will also be your greatest common prime for its factors

So if the greatest common factor of 100 is 5, so is the greatest common factor of 50, 1000, 20, etc. This makes thigns way simpiler.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

unsigned long long originalNumber = 0; // 600851475143 is the original, but it's more fun to use arbitrary numbers.

cout << "Enter a number to find its largest prime" << endl;
cin >> originalNumber;
unsigned long long copy = originalNumber;

//We can probably optimize here. We can take the square (or 4th square).
// Ex: 18/2 = 9. GCPF for 9 is the same as 18 - 3. Unecessary step, provides no optimization in this case.
// Ex: sqrt(16) = 4. GCPF for 4 is the same as 16 - 2.

unsigned long long squaredNumber = sqrt(originalNumber);

if((squaredNumber - (int)squaredNumber) == 0){ //Check if the square root of originalNumber is a whole number.
    originalNumber = sqrt(originalNumber);
    
}

//^^^Further optimization - check for 4th root. Recursively check for perfect squares.

    
   for(unsigned long long counter = 2; originalNumber > 1; ++counter){
       
       if((originalNumber % counter) == 0){
           originalNumber /= counter;
           counter--; 
       }
       cout << counter << endl;
   }
   cout << "The greatest common prime factor of " << copy << " is " << counter << endl;
}

