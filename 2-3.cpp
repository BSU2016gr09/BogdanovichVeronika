#include <iostream>
#include <clocale>
using namespace std;
//������ � ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� - N �� N.
//�� ��������� ������� �� ������ 2 - 2 �������� ������� ������������ ������� �������� ������� ������ �� k ���������
//(1 - � ������ 1 + k - ��, 2 - � ������ 2 + k - �� � �.�.) � ����� �� k ���������.
//� main �������� ����� ���� ������� ��� ����� k, ������� ������ ������������.
//���������� ��������� ������� ���������� ������ ������� �������� ����� �������� ����� ������ �� ������� �.
void randomArray(int a[], int N)
{
	int i=0;
	while (i<N)
	{
		a[i]=rand()%(N*3+1)-(N*2);
		i++;
	}
}
void printArray (int a[], int N)
{
int i=0;
while (i<N)
{
	cout<<"i="<<a[i]<<'\n';
	i++;
}
}
void doLeft(int a[], int N, int&k)
{
	int i=0;
	while (i<k)
	{
		int j=0;
		int tmp=a[0];
		while (j<N-1)
		{
			a[j]=a[j+1];
			j++;
		}
		a[N-1]=tmp;
		i++;
	}
}
void doRight(int a[], int N, int&k)
{
	int i= 0;
	while (i<k)
	{
		int j=N-1;
		int tmp=a[N-1];
		while (j>0)
		{
			a[j]=a[j-1];
			j--;
		}
		a[0]=tmp;
		i++;
	}
}
int main()
{
	setlocale (LC_ALL,"");
	const int N=10;
	int a[N], k;
	cout <<"����� k:\n";
	cin>>k;
	randomArray(a, N);
	printArray(a, N);
	doLeft(a, N, k);
	cout<<"       left\n";
	printArray(a, N);
	doRight(a, N, k);
	cout<<"       right\n";
	printArray(a, N);
	system("pause");
}