/**Print Length, Concatenation, In the third line print two strings separated by a space, and a' and b'
where they are the same as a and  b, respectively, except that their first characters are swapped.**/


#include <iostream>
#include <string>

int main() {
    // Complete the program
    std::string a,b;
    std::cin>>a>>b;
    std::cout<<a.length()<<" "<<b.length()<<"\n"<<a+b<<"\n";
    std::swap(a[0],b[0]);
    std::cout<<a<<" "<<b;
    
    return 0;
}