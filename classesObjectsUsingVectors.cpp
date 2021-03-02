#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
    private:
        std::vector<int> scores;
        int sum;
    public:
        Student() : scores(5,0), sum(0) {};
        ~Student(){}
        
        inline void input(){
            for(auto &it : scores){
                int temp;
                cin>>temp;
                it=temp;
                sum = sum + temp;
            }
        }     
     const int& calculateTotalScore()const { return sum;   }
};
    
    

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
