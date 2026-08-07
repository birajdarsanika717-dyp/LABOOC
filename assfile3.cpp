#include <iostream>
using namespace std;
namespace sanika{
    void add (int,int);
    void sub (int,int);
    void mul (int,int);
    void divi (int,int);
}

    int main(){
    int a, b, choice;

    cout << "enter two numbers:";
    cin>>a>>b;

    cout <<"1.addtion/n";
    cout <<"2.substraction/n";
    cout <<"3.modulus/n";
    cout <<"4.division/n";


    cout << "enter you choice :";
    cin>>choice;

    switch(choice)
{
    case 1:
        sanika::add(a,b);
        break;

    case 2:
        sanika::sub(a,b);
        break;

    case 3:
        sanika::mul(a,b);
        break;

    case 4:
        sanika::divi(a,b);
        break;

    default:
        cout << "Invalid Choice";
}
    return 0;
}