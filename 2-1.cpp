#include <iostream>
#include <clocale>
using namespace std;
//������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� 1 �� N.
//"�����������" ������ (��������� ������� ������ ������, 1-� ������ ���������, 2-� ���������� � ������������� � �.�.) 
//����������� ��������� ������ ���������
void doRandom(int a[], int N)
{
	int i=0;
	while(i<N)
	{
		a[i] =(rand()%(10100-5000))/100;
		i++;
	}
}
void printArray (int a[], int N)
{
int i=0;
while (i <N)
{
	cout<<"i="<<a [i]<<'\n';
	i++;
}
}
void doArray(int a[], int N)
{
	int i=0;
	while (i<N/2)
	{
	 swap(a[i], a[N-i-1]);
	 i++;
	}
}

int main ()
{
	setlocale (LC_ALL,"");
    const int N=10;
    int a[N];
	doRandom (a, N);
	cout<<"array\n";
	printArray(a,N); //�������� ������
	doArray(a, N);
	cout<<"turned\n";
    printArray(a,N);//�����������
	system("pause");
}