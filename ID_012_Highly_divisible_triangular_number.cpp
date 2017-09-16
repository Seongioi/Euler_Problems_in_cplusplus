/*
 * Created by Allegro on 6/6/2017.
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
Let us list the factors of the first seven triangle numbers:
     1: 1
     3: 1,3
     6: 1,2,3,6
    10: 1,2,5,10
    15: 1,3,5,15
    21: 1,3,7,21
    28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.
What is the value of the first triangle number to have over five hundred divisors?
*/
#include <iostream>

#define NUM 500 // number of divisors

int factorCount(unsigned long long int x);

int main(){

    unsigned long long int triangleN = 0, count = 1; // triangleN = (count*(count +1))/2
    do{
        triangleN += count;
        count++;
    }while(factorCount(triangleN) <= NUM);
    std::cout << "the value of the first triangle number to have over five hundred divisors is: " << triangleN << std::endl;
    return 0;

}

int factorCount(unsigned long long int x){
    unsigned int factors = 1;
    int count = 0;
    while(x % 2 == 0) {
        x /= 2;
        count++;
    }
    factors *= ++count;
    for (unsigned long long int i = 3; i <= x; i+=2) {
        if (x % i == 0){
            count = 0;
            while(x % i == 0){
                count++;
                x /= i;
            }
            factors *= ++count;
        }
    }
    return factors;

}