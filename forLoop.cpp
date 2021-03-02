/**For each integer  in the inclusive interval : [a,b]
If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
n>9Else if  and it is an even number, then print "even".
n>9Else if  and it is an odd number, then print "odd".**/


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
string num [] = {"", "one", "two", "three", "four", 
                           "five", "six", "seven", "eight", "nine"};
    
int a, b;
cin >> a;
cin >> b;

for (int i = a; i <= b; i++) {
    cout << (i < 10 ? num[i] : i % 2 == 0 ? "even" : "odd") << endl;
}
    return 0;
}

