#include <iostream>
#include <string>

using namespace std;

int main(){
    string grade[20];
    string subject[20];
    int c=0;
    double score[20];
    double score_sum =0;
    double sum=0;
    for(int i=0; i<20; i++){  
        cin >> subject[i] >> score[i] >> grade[i];
        if (grade[i] == "A+"){   // string은 switch-case 안됨
            sum += 4.5 *score[i];
        }
        else if (grade[i] == "A0"){
            sum += 4.0*score[i];
        }
        else if (grade[i] == "B+"){
            sum += 3.5*score[i];
        }
        else if (grade[i] == "B0"){
            sum += 3.0*score[i];
        }
        else if (grade[i] == "C+"){
            sum += 2.5*score[i];
        }
        else if (grade[i] == "C0"){
            sum += 2.0*score[i];
        }
        else if (grade[i] == "D+"){
            sum += 1.5*score[i];
        }
        else if (grade[i] == "D0"){
            sum += 1.0*score[i];
        }
        else if (grade[i] == "F"){
            sum += 0.0*score[i];
        }
        else{
            continue;
        }
        score_sum +=score[i];
    }
    for(int i=0; i<20;i++){
        if(grade[i] == "P"){
            c++;
        }
    }
    if(c==20){
        cout << "전 과목 등급이 P일 수는 없습니다 다시 입력해주세요";
    }
    printf("%.6f",sum/score_sum);


}