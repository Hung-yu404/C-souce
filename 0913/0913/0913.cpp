#include <iostream>
#include <bitset>
using namespace std;


int main() {



	//�Ƚ������
	/*
	==   ��=  >   <   >=  < =
	*/
	/*int a = 5;
	int b = 6;
	cout << (a == b) << endl;
	cout << (a < b) << endl;
	cout << (a > b) << endl;
	cout << (a >= b) << endl;
	cout << (a <= b) << endl;
	cout << (a != b) << endl;*/






	//�߼������
	/* ��&& (�мٱؼ�) ��|| ��������棩 �� !        ���ȼ�   !>&&>||      */
	/*bool a = true;
	bool b = false;
	cout << (a && b) << endl;
	cout << (a || b) << endl;
	cout << !b << endl;
	int c = !((5 > 4) && (7 - 1) && (0 - 6));
	cout << c << endl;
	int d = a || !b && b;
	cout << d << endl;*/




	//��������� 
	//int a = 1;
	//int b = 1;
	//a = (5 - 8, 7 - 9.6 + 3, 5 / 4);
	//b = 5 - 8, 7 - 9.6 + 3, 5 / 4;//���ȼ���=�� ��������b= 5-8 =-3

	//cout << a << endl;
	//cout << b << endl;

	////����1 ������ֵ����
	//int m = 4;
	//int n = 10;
	//int k = 0;
	//k = (k = m, m = n, n = k);
	//cout << m << ' ' << n << endl;



	////λ�������
	//int a = 0b1010;
	//int b = 0b0110;
	//cout << (a & b) << endl;// 1010 & 0110 = 0010 = 2.

	////��ż�� �������������һλΪ1 ����ֱ�ӿ�����������1���� ���Ϊ1Ϊ���� ���Ϊ0Ϊż����
	//cout << (6 & 1) << ' ' << (5 & 1) << endl;

	//// ��ȡһ������������ĩ5λ
	//int c = 0b100101011110;
	//cout << bitset<5> (c & 0b11111) << endl;
























	return 0;
}