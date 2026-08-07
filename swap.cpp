#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;

    cout <<"enter first numbers:";
    cin >> a;

    cout << "enter second number:";
    cin >> b;

    temp =a;
    a =b;
    b = temp;

    cout <<" after swaping :"<<  endl;
    cout << "first number="<< a << endl;
    cout << " second number="<< b << endl;

    return 0;







}