//reverse an array 

#include <iostream>
int main() {

    int N;

    int i=0;

    std::cin>>N;
    /**Declare a pointer of type int, called A, 
    and allocated new memory for it of size N**/
    int *A = new int[N]; //N length array

    while(std::cin>>A[i++]);
    
    /** Setup another while loop to output (cout) every 
    value in A in reverse, using --N to decrement the 
    the value of N so long as N is true (not equal to zero)**/
    while(std::cout<<A[--N]<<' ' && N);

    // Un-allocate the memory given to A
    delete[] A;
    return 0;
}

/**TL;DR So basically when you DO NOT KNOW the size of an array beforehand 
(like a hard-coded value '10' for example, or a const int or so) - use heap-allocated arrays!**/