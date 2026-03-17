#include <iostream>

using namespace std;

int main()
{
    int first;
    int last;
    cin >> first >> last;
    bool isPrime = true;
    for (; first <= last; first++)
    {
        if (first == 1)
        {
            isPrime = false;
        }
        for (int i = 2; i * i <= first; i++)
        {
            if (first % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << first << endl;
        isPrime = true;
    }
}
