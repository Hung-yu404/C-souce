#include <iostream>
using namespace std;



int main() {

	//һά����
	//int a[1024] = {0,1,2,3,4,5};//������������Ϊ����
	////����Ԫ�ط���
	//for (int i = 0; i <= 5; i++)
	//{
	//	cout << a[i] << endl;
	//}
	//
	////�������������n��n<100����������������������������
	//int m, n;
	//int b[100];
	//cout << "�������ָ���Ϊ���٣�" << endl;
	//cin >> m;
	//cout << "�������Ӧ�����Լ�����" << endl;
	//for (int i = 0; i < m; i++)
	//{
	//	cin >> b[i];
	//}
	//for (int j = m-1; j >=0; j--)
	//{
	//	cout << b[j];
	//}











	//��ά����
	//int a[4][5];
	//for (int i = 0; i < 4; i++)
	//{
	//	for (int j = 0; j < 5; j++) {
	//		a[i][j] = i + j;
	//		cout << a[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//
	//int b[3][2] = {{2},{23,78},{4,5}};
	//cout << b[0][1] << endl; //δ��ʼ�� Ϊ0��



	//��a�����е�һ��Ԫ���Ƶ�����ĩβ, ��������������ǰƽ��һ��λ�á�
	/*int a[1000] = {0};
	int m, n;
	cout << "����Ԫ�ظ���" << endl;
	cin >> m;
	cout << "������ӦԪ���Լ�����" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	n = a[0];
	for (int i = 0; i < m-1; i++)
	{
		a[i] = a[i + 1];
	}
	a[m - 1] = n;
	for (int i = 0; i < m; i++)
	{
		cout << a[i] << " ";
	}*/




	//������
	/*int a, b;
	int arr[1000];
	bool biaozhiwei = 1;
	cout << "�������ַ�Χ" << endl;
	cin >> a;
	for (int i = 2; i < a; i++)
	{
		arr[i] = i;
	}
	for (int i = 2; i < a; i++)
	{
		biaozhiwei = 1;
		for (int j = 2; j * j<= i; j++)
		{
			if (i % j == 0) {
				biaozhiwei = 0;
				break;
			}
			}
			if (biaozhiwei){
				cout << arr[i] << " ";
		}
	}*/



	return 0;
}

