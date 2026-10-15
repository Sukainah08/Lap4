#include <iostream>
using namespace std;

// Lab 4 - Task 2.1: sum until 0 (do..while)
int main()
{
    int num, sum = 0;
    cout << "Enter an integer value, to EXIT enter 0" << endl;
    do
    {
        cin >> num;
        sum += num;
    } while (num != 0);
    cout << "sum= " << sum << endl;

    return 0;
}
