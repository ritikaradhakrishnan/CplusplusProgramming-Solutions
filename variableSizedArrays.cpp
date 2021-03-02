/**You are given two numbers at the start. The first tells you how many rows of data there will be n, and the second tells you how many pieces of data you are going to be pulling from it. q
The next rows are the variable-length arrays (data). Each row starts with a number that tells you how long that row is. Then, the numbers following that are the actual data.
The rows after that are sort of like the coordinates for the data you are supposed to output. The first number tells you what row it is in, and the second tells you what column it is in.
Example:
2 1
5 3 4 2 5 1
7 9 6 8 4 6 7 0
1 2
The "2 1" tells us we have two rows of data and one question about it.
The next two rows are that data. We have 5 important numbers in the first row and 7 in the next, with one number at the start telling us so:
5 3 4 2 5 1 (The five pieces of data are "3 4 2 5 1")
7 9 6 8 4 6 7 0 ("9 6 8 4 6 7 0")
Since we start everything with zero in programming, you could say that the 3 in that data is the 0th number in the 0th row. 5 is the 3rd number in the 0th row. 8 is the 2nd number in the 1st row.
The last line, "1 2", is the question. It is asking you to print out the second number in the first row. (Don't forget that we start counting at zero!) In this case, that is 8. If you printed out an 8 in response to this example problem, you would be correct.
Example 2:
2 3
5 3 4 2 5 1
7 9 6 8 4 6 7 0
1 2
0 0
0 4**/

#include <iostream>
using namespace std;


int main() { 
    // n and q to number of lines and t is temp
    int n,q,t;
    cin >> n >> q; //q is questions, n is rows of data
    // create a array of size n to store pointers to n arrays
    int *array_list[n];
    // read n array lines from input
    for(int i=0;i<n;i++){
        //read first int which is the size of array
        cin >> t;
        //create a int array memory of size t
        int *A = new int[t];
        //store array pointer in our array_list
        array_list[i] = A; 
        //read current array
        for(int j=0;j<t;j++) cin >> A[j];
    }
    //now read q querys each containing two space seperated integers
    int x,y;
    for(int i=0;i<q;i++){
        cin >> x >> y;
        // we won't store queries
        //as we are going to directly print the ans to output stream
        cout << array_list[x][y] << "\n";
        //array_list[x] = pointer to array at position x
        //array_list[x][y] = yth element of xth array
    }
    return 0;
}

