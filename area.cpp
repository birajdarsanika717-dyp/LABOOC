#include <iostream>
using namespace std;

int main()
{
    int length, breadth;
    int area, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter;

    return 0;
}