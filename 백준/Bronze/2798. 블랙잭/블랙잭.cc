#include <iostream>
using namespace std;

int main()
{
    int num[101];
    int N, M;
    cin >> N >> M;
    int max = 0;
    int sum = 0;
    for(int i =0 ; i < N; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i < N; i++)
    {
        sum += num[i];
        for(int j = i+1; j < N; j++)
        {   sum += num[j];
            for(int z = j+1; z < N; z++)
            {
                sum += num[z];
                if(sum <= M && max < sum) 
                {
                    max = sum;
                }
                sum -= num[z];
            }
            sum -= num[j];
        }
        sum = 0;
    }
    cout << max;
}