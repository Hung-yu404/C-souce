#include <iostream>
using namespace std;




void swap(int *a, int *b) {
	int temp;
	temp = *a; 
	*a = *b; 
	*b = temp;
}










int main() {

	//ָ�� ����ָ������ռ�õ��ֽ���Ϊ8 �Ͳ���ϵͳ�й� 32λΪ4 64λΪ8
	int a = 10;
	int *b = &a;//����ָ�����
	*b = 11;//�ı�b��ŵ�ָ��ָ���ڴ��е�ֵ
	int c = 12;

	cout << (&a) << endl;
	cout << *(&a) << endl;
	cout << b << endl;
	swap(&a, &c);
	cout << a << " " << c;






	return 0;
}