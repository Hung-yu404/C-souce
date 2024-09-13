#include <iostream>;
using namespace std;
int main() {
	/*cout << "我的名字是raylin"<< endl;
	return 0;*/
	//变量
	/*int x = 2;
	int y = 3;
	int z;
	z = x;
	x = y;
	y = z;
	cout <<  "x ="  << x << endl << "y =" << y << endl;
	return 0;*/
	
	
	
	
	
	//常量 
   /* #define X "hello"
    #define Y "world"
	#define Z 7
	const int max = 110;
 	cout << X << endl  << Y << endl << max <<endl;
	return 0; */
	//标识符第一位必须为字母或者下划线 大小写敏感；
	
	
	
	
	
	/* 整型
	short 2字节 一字节 = 8 位 （-2^15->2^15-1)(-32768->32767)
	int   4字节 （-2^31->2^31-1)
	long  4字节
	long long  8字节
	若值溢出 数据为环状 则超出数据从起点-32768算起
	下面a的输出为-32768
	*/
	/*short a = 32768;
	cout << "a=" << a << endl;
	return 0;*/
	//sizeof 输出字节数
	/*short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	return 0;*/
	
	
	
	//浮点型
	/*
	float 4字节 32位
	double 8字节 64位
	浮点十进制值通常没有完全相同的二进制表示形式。 这是 CPU 所采用的浮点数据表示形式的副作用，所以浮点数的计算存在误差。
	*/
	/*double a = 1.000001;
	double b = 1.000002; 
	cout << a + b << endl;*/

	


}