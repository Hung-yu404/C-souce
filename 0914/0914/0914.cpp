#include <iostream>
#include<bitset>
using namespace std;


int main() {

	////位或运算符
	//int a = 0b0110;
	//int b = 0b1001;
	//cout << bitset<4>(a | b) << endl;
	////设置标志位
	//int c = 0b100111;
	//cout << bitset<6>(c | 0b1000) << endl;//将第四位0变成1.
	////置空标记位
	//int d = 0b000001;
	//cout << ((c | d) - d) << endl;//通过c | d 将最后一位变成1 然后再减去1 结果为0；
	////低位连续0变成1
	//int e = 0b1010001000;
	////e - 1 = 0b1010000111 连续的0变成1 最近的1变成0
	//cout << bitset<10>(e | (e - 1)) << endl;


	//异或运算符 相同为0 不同为1。
	//任何数和0异或为本身 两个相同的数异或为0 异或为不带进制的二进制加法。
	//int a = 0b1010;
	//int b = 0b0110;
	//cout << bitset<4>(a ^ b) << endl;
	////标记位取反
	//int c = 0b1000101;
	//cout << bitset<6>(c ^ 1000) << endl;
	////变量交换
	//int d = 44;
	//int e = 55;
	//d = d ^ e; 
	//e = d ^ e; //e = d' ^ e = d ^ e ^ e =d
	//d = d ^ e; // d = d ^ e ^ d = e
	//cout << d << ' ' << e << endl;
	   

	//按位取反
	//int	a = 0b1111;
	//cout <<bitset<4>( ~a )<< endl;
	//int b = 12;
	//cout << (~b + 1) << endl;//取相反数 与补码相关


	//左移 本质为乘以2
	//int x = 0b11;
	//x = (x << 1);
	//cout << x << endl;
	////左移溢出
	//int y = 64;
	//cout << (y << 31) << endl;


	//右移
	/*int a = 0b111;
	cout << bitset<3>(a >> 1) << endl; 

*/

	

	//if 
	/*double a;
	double b;
	cout << "输入第一个数字" << endl;
	cin >> a;
	cout << "输入第一个数字" << endl;
	cin >> b;
	if (a > b) {
		double c = a - b;
		cout << "第一个数字比第二个大" << c << endl;
	}
	else if (a < b) {
		double c = b - a;
		cout << "第二个数字比第一个大" << c << endl;
	}
	else
	{
		cout << "第一个数和第二个数相等" << endl;
	}*/


	//条件运算符
	// 表达式1 ？ 表达式2 ： 表达式3；
	//int a = 3;
	//int b = 4;
	//int max;
	//max = (a > b ? a : b);// 满足条件返回表达式2 否则返回表达式3
	//cout << max << endl;



	//switch switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型 
	//break 语句： 每个 case 语句末尾的 break 语句是必要的，用于跳出 switch 语句。如果缺少 break，程序将继续执行下一个 case，这叫做"贯穿"。
	//default 语句： default 语句是可选的，但通常在所有 case 都不匹配时使用，处理所有未列出的情况。
	//表达式类型： switch 表达式通常是整数类型或枚举类型，浮点数和字符串类型是不可行的。
	/*int a;
	int b;
	cout << "输入第一个数字" << endl;
	cin >> a;
	cout << "输入第一个数字" << endl;
	cin >> b;
	int result = a - b;
	switch (result)
	{
	case 0 :
			cout << "两个数相等" << endl;
			break;
	default:
		cout << "两个数不相等" << endl;
		break;
	}*/


	
















	return 0;
}