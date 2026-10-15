#include <iostream>
using namespace std;

// Lab 4 - Task 1.1: odd / even from 0 to 10 (while)
int main()
{
    int i = 0;
    while (i <= 10)
    {
        if (i % 2 == 0)
            cout << i << " even" << endl;
        else
            cout << i << " odd" << endl;
        i++;
    }

    return 0;
}
