#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> angles;
    while(true)
    {
        for(int i = 0; i < 3; i++)
        {
            int num;
            cin >> num;
            angles.push_back(num);
        }
        if(angles.back() == 0) return  0;
        sort(angles.begin(), angles.end());
        int max = angles.back();
        angles.pop_back();
        int min1 = angles.back();
        angles.pop_back();
        int min2 = angles.back();
        angles.pop_back();


        if(max >= (min1 + min2)) cout << "Invalid" <<"\n";
        else if(max == min1 && min1  == min2) cout <<"Equilateral" << "\n";
        else if (min1 == min2 || min1 == max) cout << "Isosceles" << "\n";
        else cout << "Scalene" <<"\n";
    }
    return 0;
}