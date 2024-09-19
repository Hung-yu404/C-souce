#include <iostream>
using namespace std;



int main() {

	//一维数组
	//int a[1024] = {0,1,2,3,4,5};//数组容量必须为常量
	////数组元素访问
	//for (int i = 0; i <= 5; i++)
	//{
	//	cout << a[i] << endl;
	//}
	//
	////逆序输出：输入n（n<100）个数，并对输入数据逆序排序
	//int m, n;
	//int b[100];
	//cout << "输入数字个数为多少？" << endl;
	//cin >> m;
	//cout << "请输入对应数字以及个数" << endl;
	//for (int i = 0; i < m; i++)
	//{
	//	cin >> b[i];
	//}
	//for (int j = m-1; j >=0; j--)
	//{
	//	cout << b[j];
	//}











	//二维数组
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
	//cout << b[0][1] << endl; //未初始化 为0；



	//将a数组中第一个元素移到数组末尾, 其余数据依次往前平移一个位置。
	/*int a[1000] = {0};
	int m, n;
	cout << "输入元素个数" << endl;
	cin >> m;
	cout << "输入相应元素以及个数" << endl;
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




	//求质数
	/*int a, b;
	int arr[1000];
	bool biaozhiwei = 1;
	cout << "输入数字范围" << endl;
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

