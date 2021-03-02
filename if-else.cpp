/**If 1<=n<=9 , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); 
otherwise, print Greater than 9.**/

#include <bits/stdc++.h> //header file that includes every standard library.

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n>9){
        cout<<num[0];
    }
    else{
        cout<<num[n];
    }
    std::ios_base::sync_with_stdio(false); //make cout faster than printf
    return 0;
}
