#include <iostream>

using namespace std;

long long find_area(int n)
{
    long long block_size = 0;
    for (int i = 1; i <= n; i++)
    {
        block_size += i;
    }
    long long margin_size = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        margin_size += i; // 점선 개수
    }
    return (4 * block_size) - (margin_size * 4);
}



int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 0;
    cin >> n;
    long long result = find_area(n);
    cout << result << "\n";
    return 0;

}