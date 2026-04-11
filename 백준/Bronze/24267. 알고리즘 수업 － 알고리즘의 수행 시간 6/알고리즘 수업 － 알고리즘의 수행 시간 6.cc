#include <iostream>

using namespace std;

int main ()
{
    long long n = 0;
    cin >> n;
    long long total = 0;
    long long sum = 0;
    
    for(int i = 1; i <= n-2; i++)
    {
        total += i;
    }
    while(total >= 1)
    {
        sum += total;
        total -= n-2;
        n--;
    }
    cout << sum << "\n" << 3;
}