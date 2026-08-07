#include<iostream>
#include<string>
using namespace std;
class employee{
    private:
    int id;
    string designation;
    string branch;
    int salary;
    public:
    void inputDetails(){
        cout<<"Enter employee id:";
        cin>>id;
        cout<<"Enter designation:";
        cin>>designation;
        cout<<"Enter branch:";
        cin>>branch;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void displayDetails()
    {
        cout<<"\n---Employee Details---\n";
        cout<<"Id:"<<id<<endl;
        cout<<"Designation:"<<designation<<endl;
        cout<<"Branch:"<<branch<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
    void grosssalary(){

        int gross = salary + (salary * 0.2);
        cout<<"Gross Salary:"<<gross<<endl;
    }
};
int main()
{
    employee e[2];
    e[0].inputDetails();
    e[1].inputDetails();
    e[0].displayDetails();
    e[1].displayDetails();
    
    return 0;
}
