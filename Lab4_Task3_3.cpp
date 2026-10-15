#include <iostream>
using namespace std;

// Lab 4 - Task 3.3: numbers between 100 and 200 divisible by 9 (for)
int main()
{
    int count = 0, sum = 0;
    cout << "Numbers between 100 and 200, divisible by 9:" << endl;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << "\nThe count : " << count << endl;
    cout << "The sum : " << sum << endl;

    return 0;
}
