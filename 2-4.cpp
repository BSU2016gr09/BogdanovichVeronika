#include <iostream>
#include <clocale>
using namespace std;
// ������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� 1 �� N.
//"������������" �������� ������� ����� ���������, ������������� �� ���� :
//1) ������ ����� ������� ��������� �������� 2) � �������������� ���.�������
void doRandom1(int a[], int N)
{
	int i=0;
	while(i < N)
	{
		a[i] =rand()%N+1;
		i++;
	}
}
void printArray1 (int a[], int N)
{
int i=0;
while (i<N)
{
	cout<<"i="<<a[i]<<'\n';
	i++;
}
}
void doRandom2(int b[], int M)
{
	int j=0;
	while(j < M)
	{
		b[j] =rand()%M+1;
		j++;
	}
}
void printArray2 (int b[], int M)
{
int j=0;
while (j<M)
{
	cout<<"j="<<b[j]<<'\n';
	j++;
}
}
void changeArray(int b[], int M,int a[], int N)
{
	int i=0,j=0;
	while(i < N)
	{
		while (j<M)
			{
				b[j] =a[i];
		        j++;
		    }
		i++;
	}
}
int main ()
{
	setlocale (LC_ALL,"");
    const int N=10,M=10;
    int a[N],b[M];
	doRandom1 (a, N);
	cout<<"������ ������:\n";
    printArray1(a,N);
	doRandom2 (b,M);
	cout<<"\n������ ������:\n";
    printArray2(b,M);
	changeArray (a, N, b, M);
	system("pause");
}
