#include <iostream>
#include <vector>
using namespace std;

// 비트 연산자 사용해서 쉽게 풀기
int main()
{
    int x1, x2, x3;
    int y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int result_x = x1 ^ x2 ^ x3;
    int result_y = y1 ^ y2 ^ y3;
    // vector<pos> stars;
    // int result_x;
    // int result_y;
    // for (int i = 0; i < 3; i++)
    // {
    //     pos in_pos;
    //     cin >> in_pos.x >> in_pos.y;
    //     stars.push_back(in_pos);
    // }
    // if (stars[0].x == stars[1].x)
    // {
    //     result_x = stars[2].x;
    // }
    // else if (stars[0].x == stars[2].x)
    // {
    //     result_x = stars[1].x;
    // }
    // else
    //     result_x = stars[0].x;

    // if (stars[0].y == stars[1].y)
    // {
    //     result_y = stars[2].y;
    // }
    // else if (stars[0].y == stars[2].y)
    // {
    //     result_y = stars[1].y;
    // }
    // else
    //     result_y = stars[0].y;

    cout << result_x << " " << result_y;
}