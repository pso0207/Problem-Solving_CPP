#include <iostream> //gpt 도움 받음
#include <cmath>

using namespace std;

int main (){
    bool paper[100][100] ={false};
    int N;
    int sum =0;
    cin >>  N;
    for(int i=0; i<N; i++){
        int R, C;
        cin >> R >> C;
        for(int j=R; j<R+10;j++){
             for(int z=C; z<C+10;z++){
                paper[j][z] = true;
             }
        }
    }
    for(int i=0; i<100;i++){
        for(int j=0; j<100;j++){
            if(paper[i][j] == true){
                sum++;
            }
        }
    }
    cout << sum;
}