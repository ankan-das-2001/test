#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    cout << n;
    while (n != 1)
    {
        if (n % 2)
        {
            n = (n * 3) + 1;
            cout << " " << n;
        }
        else
        {
            n = n / 2;
            cout << " " << n;
        }
    }
    cout << endl;
    return 0;
}