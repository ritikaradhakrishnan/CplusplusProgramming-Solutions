erase(int position):
Removes the element present at position.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
erase(int start,int end):
Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> v;
    int size,tmp,x, a, b;
    cin >> size; // get the size from cin
    for(int i = 0; i < size; ++i){
        cin >> tmp;   // get the element value and push to vector.
        v.push_back(tmp);
    }
    cin >>x >>a>>b; // get x,a,b value;
    v.erase(v.begin()+ x - 1);// erase the position x
    v.erase(v.begin()+ a - 1, v.begin() + b - 1);// erase from [a;b)
    cout << v.size()<<endl;  // print the size left.
    for(auto &x : v) cout << x << " ";

    return 0;
}









/**the question says 1-indexed array, which is unecessary,above solution is for zero indexed array
Input 
6
1 4 6 2 8 9
2
2 4
Your Output (zero indexed)
3
1 4 9 
Expected Output (1 indexed)

3
1 8 9
**/
