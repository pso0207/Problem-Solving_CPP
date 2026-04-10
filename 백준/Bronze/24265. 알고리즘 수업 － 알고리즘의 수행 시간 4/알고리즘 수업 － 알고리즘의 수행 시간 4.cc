#include<iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    for(int i = 1; i <= n-1; i++)
    {
        sum += i;
    }

    cout << sum << "\n"  << 2;

}
