//print data type


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long l; 
    char c;
    float  f; 
    double d;
    cin>>a>>l>>c>>f>>d;
    cout<<a<<endl<<l<<endl<<c<<endl;
    cout.precision(3);
    cout<<fixed<<f<<endl;
    cout.precision(9);
    cout<<fixed<<d;
    std::ios_base::sync_with_stdio(false);
    return 0;
}