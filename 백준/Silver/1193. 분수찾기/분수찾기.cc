#include <iostream>

using namespace std;

int main(){
    int X;
    cin >> X;
    int i =1;
    while(X>0){
        if(X<=i){
            break;
        }
        X-=i;
        i++;

    }
    

    if(i%2 ==0){
       cout << X <<"/"<< i+1-X;
    }
    else{
        cout << i+1-X <<"/"<< X;

        
    }
    
}