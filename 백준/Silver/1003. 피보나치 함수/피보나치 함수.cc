#include <iostream>
using namespace std;


int dp[41][2]; 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. 기본값(초기값) 세팅
    dp[0][0] = 1; // 0일 때: 0은 1번
    dp[0][1] = 0; // 0일 때: 1은 0번

    dp[1][0] = 0; // 1일 때: 0은 0번
    dp[1][1] = 1; // 1일 때: 1은 1번

    // 2. 미리 40번까지 표를 채워두기 (점화식)
    // N번째 값 = (N-1)번째 값 + (N-2)번째 값
    for (int i = 2; i <= 40; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-2][0];
        dp[i][1] = dp[i-1][1] + dp[i-2][1];
    }

    int T;
    cin >> T; // 테스트 케이스 개수

    while (T--) {
        int n;
        cin >> n;
        // 3. 계산 안 하고 표에서 바로 꺼내서 출력 (O(1))
        cout << dp[n][0] << " " << dp[n][1] << "\n";
    }

    return 0;
}