#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

class Student{
    public:
        void set_age(int a);
        void set_first_name(string f);
        void set_last_name(string l);
        void set_standard(int s);
        int get_age();
        string get_first_name();
        string get_last_name();
        int get_standard();
        string to_string();
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
};
int main() {

    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
void Student::set_age(int a){
    age = a;
}
int Student::get_age(){
    return age;
}
void Student::set_first_name(string f){
    first_name = f;
}
string Student::get_first_name(){
    return first_name;
}
void Student::set_last_name(string l){
    last_name = l;
}
string Student::get_last_name(){
    return last_name;
}
void Student::set_standard(int s){
    standard = s;
}
int Student::get_standard(){
    return standard;
}
string Student::to_string(){
    stringstream ss;
    ss << age << "," << first_name << "," << last_name << "," << standard;
    string text = ss.str();
    return text;
}