#include <bits/stdc++.h>

using namespace std;

struct student
{
    int age;
    string f_name;
    string l_name;
    int std;
};
int main ()
{
    struct student student;
    cin>>student.age>>student.f_name>>student.l_name>>student.std;
    cout<<student.age<<" "<<student.f_name<<" "<<student.l_name<<" "<<student.std<<endl;
}