#include <iostream>
using namespace std;




void swap(int *a, int *b) {
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp;
}










int main() {

	//指针 所有指针类型占用的字节数为8 和操作系统有关 32位为4 64位为8
	int a = 10;
	int *b = &a;//定义指针变量
	*b = 11;//改变b存放的指针指向内存中的值
	int c = 12;

	cout << (&a) << endl;
	cout << *(&a) << endl;
	cout << b << endl;
	swap(&a, &c);
	cout << a << " " << c;






	return 0;
}