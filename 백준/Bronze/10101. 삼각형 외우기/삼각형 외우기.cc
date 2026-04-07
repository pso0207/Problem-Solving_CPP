#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int sum;
    int a,b,c;
    cin >> a >> b >> c;
    sum = a + b + c;
    if(sum != 180) 
    {
        cout << "Error" << "\n";
        return 0;
    }
    
    if(a == b & b == c) cout << "Equilateral" <<"\n";
    else if(a == b || b == c || a == c) cout <<"Isosceles" << "\n";
    else cout << "Scalene" << "\n";
    return 0;
}