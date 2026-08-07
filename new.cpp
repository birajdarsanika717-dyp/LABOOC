
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    float marks;
    public:
    void inputDetails(){
        cout<<"Enter student name:";
        getline(cin>>ws, name);
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter marks:";
        cin>>marks;
    }
    void displayDetails() const {
        cout<<"\n---Student Details---\n";
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no :"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main()
{ 
    student s,s1,s2;
    s.inputDetails();
    s.rollno =100;
    s.marks = 95.5;
    s1.inputDetails();
    s2.inputDetails();
    displayDetails();
    return 0;
}