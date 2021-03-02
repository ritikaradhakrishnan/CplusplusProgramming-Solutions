/**The function is declared with a void return type, so there is no value to return. 
Modify the values in memory so that a contains their sum and b contains their absoluted difference.**/



//#include <stdio.h>
#include <iostream>
#include <cstdlib>
//#include <cmath>

void update(int &x, int &y){ //in C use *x,*y
    //in c++,don't use raw pointers, use reference instead
    int tmp{x+y};
    y = std::abs(x-y);
    x=tmp;
}



int main(){
    int a,b;
    int *pa = &a;
    int *pb = &b;
    std::cin>>a>>b;
    //scanf("%d %d", &a, &b); //in C
    update(*pa,*pb);
    std::cout<<a<<std::endl;
    std::cout<<b;
    //printf("%d\n%d", a, b); //in C
    return 0;


}