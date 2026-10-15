#include <iostream>
using namespace std;

// Lab 4 - Task 3.1: multiplication table up to 10 (for)
int main()
{
    int value;
    cout << "Enter an integer: ";
    cin >> value;
    for (int i = 1; i <= 10; i++)
        cout << value << " * " << i << " = " << value * i << endl;

    return 0;
}
