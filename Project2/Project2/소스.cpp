#include <iostream>
using namespace std;

// 오버로딩함수 정의
int sum(int n1, int n2)
{
	return n1 + n2;
}

int sum(int n1, int n2, int n3)
{
	return n1 + n2 + n3;
}

double sum(double n1, double n2, double n3)
{
	return n1 + n2 + n3;
}

int sum(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
	{
		total += arr[i];
		return total;
	}
}

int main() 
{
	cout << "sum(10,20) =" << sum(10, 20) << endl;
	cout << "sum(10,20,30) =" << sum(10, 20,30) << endl;
	cout << "sum(1.5,8.7,9.3) =" << sum(1.5, 8.7,9.3) << endl;

	int arr[] = { 10, 20, 30, 40, 50 };
	cout << "sum(arr, 5) =" << sum(arr, 5) << endl;

	return 0;
}