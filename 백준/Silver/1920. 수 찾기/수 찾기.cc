#include <iostream>
#include <vector>
#include <algorithm>
#include<cstdio>
using namespace std;

int binarySearch(vector<int>&num,int n)
{
    int left = 0;
    int length = num.size();
    int right = length-1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        
        if (n == num[mid])
            return 1;
        else if (n > num[mid])
        {
            left = mid + 1;
            
        }
        else
            right = mid - 1;
        mid = (left + right) / 2;
    }
    return 0; // 값이 없을 경우

}


int main()
{
    int n = 0;
    int m = 0;
    scanf("%d", &n);
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    sort(A.begin(), A.end());
    scanf("%d" ,& m);
    int num;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &num);
        printf("%d \n", binarySearch(A, num));
    }
    

}
