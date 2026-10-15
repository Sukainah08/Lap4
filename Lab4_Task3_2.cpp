#include <iostream>
using namespace std;

// Lab 4 - Task 3.2: n odd natural numbers and their sum (for)
int main()
{
    int n, sum = 0;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "The odd numbers are: ";
    for (int i = 1; i <= n; i++)
    {
        int odd = 2 * i - 1;
        cout << odd << " ";
        sum += odd;
    }
    cout << "\nThe Sum of odd Natural Numbers up to " << n << " terms: " << sum << endl;

    return 0;
}
