#include <iostream>
using namespace std;

// inline �Լ� ����
inline int square(int num)
{
	return num * num;
}

int main()
{
	int num;
	cout << "������ �Է��Ͻʽÿ� -->";
	cin >> num;

	// inline �Լ� ȣ��
	cout << num << " x " << num << " = " << square(num) << endl;
}