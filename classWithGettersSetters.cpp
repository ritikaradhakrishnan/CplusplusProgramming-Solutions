#include <iostream>
//#include <sstream>
using namespace std;

class Student{
    private:
        int age, std;
        string first_name, last_name;
    public: //setters
        void set_age(int ageS){
            age = ageS;
        }
        void set_std(int stdS){ //data type to represent non-negative int no.s
            std = stdS;
        }
        void set_first_name(string first_nameS){
            first_name = first_nameS;
        }        
        void set_last_name(string last_nameS){
            last_name = last_nameS;
        }       
        //getters
        int get_age(){
            return age;
        }
        int get_std(){ 
            return std;
        }
        string get_first_name(){
            return first_name;
        }        
        string get_last_name(){
            return last_name;
        }
        //now to display , seperated values output in the same line
        string to_string(){ //std::to_string, Convert numerical value to string
            //string result = std::to_string(age)+','+get_first_name()+','+get_last_name()+','+std::to_string(std);
                string result = std::to_string(age) +','+get_first_name()+','+get_last_name()+','+std::to_string(std);
            return result;
        }
};


int main() {
    
    int age; 
    int std;
    string f_name;
    string l_name;
    cin>>age>>f_name>>l_name>>std;
    Student st;
    st.set_age(age);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    st.set_std(std);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_std() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    
    
    return 0;
}
