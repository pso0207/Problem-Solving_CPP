#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


void hanoi(int n, int from =1, int temp =2 ,int to =3)
{

	
	if (n == 1)
	{
		cout << from << " " << to << "\n";
	
	}
	else {
		hanoi(n - 1, from, to, temp);
		cout << from << " " << to << "\n";
		hanoi(n - 1, temp, from, to);
	
	}
	
}

int main() {
	
	int N;
	cin >> N;
	cout << static_cast<int>(pow(2, N)) - 1 << "\n";
	hanoi(N);
    	
}

