#include <iostream>
using namespace std;


int main() {



//while循环
	/*int count = 0;
	while (count < 10) {
		cout << count << endl;
		count++;
	}*/



//do...while
	/*int count = 0;
	do {
		cout << count << endl;
		count++;
	} while (count < 10);*/

	//while循环中先判断再执行 do..while先执行在判断 在上述代码中 若count = 10 则while无输出 do..while输出10.




//for
	/*int a = 0;
	int b;*/
	/*cout << "输入数字" << endl;
	cin >> b;
	for ( a ; a < b; a++,b--)
	{
			cout << a << ' ' << b << endl;
	}*/
	

	/*for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}*/


	//双循环九九乘法表
	/*for (int i = 9; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << " ";
		}
		cout << endl;
	}*/



	//break

		//// 局部变量声明
		//int a = 10;

		//// do 循环执行
		//do
		//{
		//	cout << "a 的值：" << a << endl;
		//	a = a + 1;
		//	if (a > 15)
		//	{
		//		// 终止循环
		//		break;
		//	}
		//} while (a < 20);


	//continue
		// 局部变量声明
		int a = 10;

		// do 循环执行
		//do
		//{
		//	if (a == 16)
		//	{
		//		a += 1;//如果不加1 则会直接跳过循环 a一直是16 后面循环就无法进行 数字就无法显示。
		//		continue;
		//	}
		//	cout << "a 的值：" << a << endl;
		//	a = a + 1;

		//} while (a < 20);

		//return 0;

	







	return 0;
}