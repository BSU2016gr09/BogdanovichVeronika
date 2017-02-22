#include <iostream>
#include <clocale>
using namespace std;
void printNumbers1(int a[], int N) 
{
	int i=1;
	while (i<N)
	{
		cout <<a[i]<<" ";
		i+=2;
	}
	cout <<"\n";
}
void printNumbers2(int a[], int N)
{
	int i=0;
	while (i<N)
	{
		cout<<a[i]<<" ";
		i+=2;
	}
	cout <<"\n";
}
void doRandom(int a[], int N)
{
	int i=0;
	while(i < N)
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
int main ()
{
	//�������� ������ ������������ ����� ������� N (����� N �������� ��� ���������). ������������������� �������� ��������� ������� ���������� ������� �� ���������� �� -50 �� 50.������� �������� ������� ��������� � ��������� �������������� (1-�, 3-�, 5-�,...) � ����� - � �������.
	setlocale(LC_ALL,"");
    const int N=10;
    int a[N];
	doRandom (a, N);
	printArray(a,N);
	printNumbers1(a,N);
    printNumbers2(a,N);
    system ("pause");
}