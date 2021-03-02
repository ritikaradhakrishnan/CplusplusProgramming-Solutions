#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);   //create a new stream
    vector<int> result;
    char ch;
    int tmp;
    while(ss >> tmp) {      //Get me the next thing on the stream (which actually is a string) and put it in the variable tmp. 
        result.push_back(tmp); //while doing this we get (,int) so to store , we use ch
        ss >> ch;           // ch to get rid of all the commas and make the loop work.
    }
    return result;
        
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}