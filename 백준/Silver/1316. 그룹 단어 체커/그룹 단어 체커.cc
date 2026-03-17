#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> str(N);
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    int groupWordCount = N; // 초기 그룹 단어 개수

    for (int i = 0; i < N; i++) {
        bool appeared[26] = { false }; // 각 알파벳의 등장 여부
        int lastIndex = -1; // 마지막으로 등장한 문자 인덱스

        for (int j = 0; j < str[i].length(); j++) {
            char currentChar = str[i][j];

            // 이전 문자와 다른 경우
            if (currentChar != str[i][lastIndex]) {
                if (appeared[currentChar - 'a']) {
                    groupWordCount--; // 그룹 단어가 아니므로 카운트 감소
                    break; // 더 이상 체크할 필요 없음
                }
                appeared[currentChar - 'a'] = true; // 현재 문자 사용 기록
            }
            lastIndex = j; // 마지막 인덱스 갱신
        }
    }

    cout << groupWordCount << endl; // 그룹 단어의 개수를 출력
    return 0;
}
