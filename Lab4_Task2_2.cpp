#include <iostream>
using namespace std;

// Lab 4 - Task 2.2: count a, b, c until 'x' (do..while)
int main()
{
    char ch;
    int countA = 0, countB = 0, countC = 0;
    do
    {
        cout << "Enter a character (to EXIT enter x): ";
        cin >> ch;
        switch (ch)
        {
        case 'a': countA++; break;
        case 'b': countB++; break;
        case 'c': countC++; break;
        }
    } while (ch != 'x');

    cout << "Number of 'a' character is: " << countA << endl;
    cout << "Number of 'b' character is: " << countB << endl;
    cout << "Number of 'c' character is: " << countC << endl;

    return 0;
}
