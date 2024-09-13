#include <iostream>
#include <bitset>
using namespace std;


int main() {



	//比较运算符
	/*
	==   ！=  >   <   >=  < =
	*/
	/*int a = 5;
	int b = 6;
	cout << (a == b) << endl;
	cout << (a < b) << endl;
	cout << (a > b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a != b) << endl;*/






	//逻辑运算符
	/* 与&& (有假必假) 或|| （有真必真） 非 !        优先级   !>&&>||      */
	/*bool a = true;
	bool b = false;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << !b << endl;
	int c = !((5 > 4) && (7 - 1) && (0 - 6));
	cout << c << endl;
	int d = a || !b && b;
	cout << d << endl;*/




	//逗号运算符 
	//int a = 1;
	//int b = 1;
	//a = (5 - 8, 7 - 9.6 + 3, 5 / 4);
	//b = 5 - 8, 7 - 9.6 + 3, 5 / 4;//优先级比=低 不加括号b= 5-8 =-3

	//cout << a << endl;
	//cout << b << endl;

	////案例1 用于数值交换
	//int m = 4;
	//int n = 10;
	//int k = 0;
	//k = (k = m, m = n, n = k);
	//cout << m << ' ' << n << endl;



	////位与运算符
	//int a = 0b1010;
	//int b = 0b0110;
	//cout << (a & b) << endl;// 1010 & 0110 = 0010 = 2.

	////奇偶性 奇数二进制最后一位为1 所以直接可以用数字与1相与 结果为1为奇数 结果为0为偶数；
	//cout << (6 & 1) << ' ' << (5 & 1) << endl;

	//// 获取一个二进制数的末5位
	//int c = 0b100101011110;
	//cout << bitset<5> (c & 0b11111) << endl;
























	return 0;
}