#include <iostream>
using namespace std;



int add(int a, int b)
{
	return a + b;
}

int sum(int m) {
	/*int sum = 0;
	for (int i = 0; i <= m; i++)
	{
		 sum += i;
	}
	return sum;*/

	return (1 + m) * m / 2;//用公式
}


void swap(int a, int b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	int temp = (temp = a, a = b, b = temp);
	cout << "交换后" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

}


void san3(int n); //函数声明


//求素数个数
void su(int n) {
	bool flag = true;
	int sum = 0;
	for (int i = 2; i <= n; i++)
	{
		flag = true;
		for (int j = 2; j * j <= i; j++)
		{
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
			if (flag) {
				cout << i << " ";
				sum++;
			}
	
	}
	cout << "素数个数为" << sum << endl;
}
//哥德巴赫猜想

int main() {

	cout << add(4, 5) << " " << sum(100) << endl;

	//函数的值传递
	int a = 6;
	int b = 7;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//值在只是在函数内部进行了交换，实际的值没变。


	//函数的声明 若函数定义在main函数之后 则需要进行声明 否则找不到函数定义
	/*san3(6);
	int m;
	cout << "输入一个数字范围" << endl;
	cin >> m;
	su(m);*/








	return 0;
}


void san3(int n) {
	int a[100][100] = {0};
	for (int i = 0; i < n; i++)
	{
		a[i][0] = a[i][i] = 1;
		if (i > 1) {
			for (int j = 1; j < n - 1; j++)
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}