#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
    int N;
    cin >> N;
    vector<pair<int,int>> pos;
    for(int i = 0; i < N; i++)
    {
        pair<int,int> in_pos;
        cin >> in_pos.first >> in_pos.second;
        pos.push_back(in_pos);
    }
    auto min_x = min_element(pos.begin(), pos.end());
    auto max_x = max_element(pos.begin(), pos.end());

    auto min_y = min_element(pos.begin(), pos.end(),[](const pair<int,int>& a,const pair<int,int>& b){
        return a.second < b.second;
    });
    auto max_y = max_element(pos.begin(), pos.end(),[](const pair<int,int>& a,const pair<int,int>& b){
        return a.second < b.second;
    });

    cout << (max_x ->first - min_x->first ) * (max_y->second - min_y->second) << "\n";
}