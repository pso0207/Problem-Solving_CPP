#include<iostream>

using namespace std;

int main()
{
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    int width = 0;
    if(num[0] > num[1]) swap(num[0], num[1]);
    if(num[1] > num[2]) swap(num[1], num[2]);
    if(num[0] > num[1]) swap(num[0], num[1]);



    while(num[2] >= num[0] + num[1]){
            num[2]--;
        } 
        width = num[2] + num[1] + num[0];
    
    width = num[2] + num[1] + num[0];
    cout << width <<"\n";

}