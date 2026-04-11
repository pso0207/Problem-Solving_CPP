#include<iostream>

using namespace std;

int main()
{
    int a1, a0, c ,n0;
    cin >> a1 >> a0 >> c >> n0;
    
    int n_fun = a1 * n0 + a0;
    int g_fun = c * n0;
    if(n_fun <= g_fun && c >= a1) cout << 1;
    else cout << 0;
}