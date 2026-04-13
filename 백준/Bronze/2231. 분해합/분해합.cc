#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int start = 0;
    vector<int> num;
    if(N-63 <= 0) start =0;
    else start = N -63;
    for(int i = start; i < N; i++)
    {
        int temp = i;
        while(i != 0)
        {
            num.push_back(i%10);
            i /= 10;
        }
        num.push_back(i);
        int sum = accumulate(num.begin(),num.end(),0);
        if(sum + temp == N) 
        {
            cout << temp;
            return 0;
        }
        else {
            num.clear();
        }
        i = temp;
    }
    cout << 0;
    return 0;

}


//63