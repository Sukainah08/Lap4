#include <iostream>
using namespace std;

// Lab 4 - Task 1.2: print "hello" until user enters 'n' (while)
int main()
{
    char c;
    cout << "Enter character: " << endl;
    cin >> c;
    while (c != 'n')
    {
        cout << "hello" << endl;
        cin >> c;
    }

    return 0;
}
