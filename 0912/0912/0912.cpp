#include <iostream>;
using namespace std;

int main() {
	
	
	
	//字符型 单个字符用'' 字符串用"" 字符通过转为ASCII码存储.
	//char a = 'Y'; //一字节 8位
	//char b = 'y';
	//b = 120;//在将b定义为字符常量后 赋值会给b赋予相应ASCII码的字符，b的值此时为x(x的ASCII码值为120)
	//cout << a << endl;
	//cout << b << endl;
	//cout << int(a) << endl;//把a转换成整型，输出ASCII码。
	//cout << a - b << endl;// 做运算时为ASCII的计算。





	////转义字符 转义字符用于表示无法直接在字符串字面量中书写的特殊字符。转义字符以反斜杠 \ 开头，紧跟一个特定的字符，表示某种特殊含义或效果。
	//char a = '\n';//换行
	//cout << "Good morning" << a;
	// \b 退格符  \\ 表示字符'\'  \t 制表符 若字符串里要输出引号 则可以用\'' .




	//字符串 char 变量名[] = "字符串常量"
	/*char a[] = "good evening";
	cout << sizeof(a) << endl;
	string b = "晚上好";
	cout << a <<' ' << b << endl;
	*/


	//布尔类型
	//bool result_1 = false;
	//bool result_2 = true;
	//cout << (result_1 &&result_2) << endl;//要打括号 不然不知道与的范围。



	//加减乘除
	/*int a = 2;
	double b = 3.454;
	char c = 'a'
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << c + 1<< endl;

	*/



	//取模运算 取模符号和被除数一致
	/*int a = 90;
	int b = 8;
	int c = -7;
	int d = -100;
	cout << a % b << endl;
	cout << a % c << endl;
	cout << a % c << endl;
	cout << d % c << endl;*/



	// 递增递减
	//int i = 0;
	//i++;
	//cout << i << endl;
	//++i;
	//cout << i << endl;


	//int j = 2;
	//int x = i++; //先把值给到x 再递增，此时i的值为3 x的值为2。
	//int y = ++j; // 先把值递增，再给到y。
	//cout << x << endl;
	//cout << y << endl;
	//减法同理


	
	
	
	
	//赋值运算符
	/*int x = 7;
	int y = 8;
	int m = 10;
	int n = 2;
	y = x;
	cout << y << endl;
	m += n;
	m -= n;
	cout << m << endl;*/



















	

















	return 0;
}