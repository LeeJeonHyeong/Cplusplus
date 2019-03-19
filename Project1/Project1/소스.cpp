#include <iostream>
using namespace std;

// inline 함수 정의
inline int square(int num)
{
	return num * num;
}

int main()
{
	int num;
	cout << "정수를 입력하십시오 -->";
	cin >> num;

	// inline 함수 호출
	cout << num << " x " << num << " = " << square(num) << endl;
}