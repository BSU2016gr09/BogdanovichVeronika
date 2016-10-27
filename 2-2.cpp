#include <iostream>
#include <clocale>
using namespace std;
//������ ����� ����� ������� N ������������������� ���������� ������� �� ���������� �� - N �� N.
//���������� �������� �������� ������� ������ �� 1 �������
//(��������� ������� ������ ������, 1 - � ������ 2 - �, 2 - � ������ 3 - � � �.�.)
//����� ���������� �������� �������� ������� ����� �� 1 �������
//(������ ������� ������ ���������, 2 - � ������ 1 - � � �.�)
void doRandom(int a[], int N)
{
	int i=0;
	while(i < N)
	{
		a[i] =rand()%N+1;
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
void doLeft(int a[], int N) 
{
	int first = a[0],i = 0;
	while (i<(N-1))
	{
		a[i] = a[i+1];
	    
        i++;
    }
a[N-1] = first;
}
void doRight(int a[], int N) 
{
	int last=a[N-1],i=N-1;
	while (i>0)
	{
		a[i] = a[i-1];
	    i--;
	}
	    a[0] = last;

}
int main ()
{
	setlocale (LC_ALL,"");
    const int N=10;
    int a[N];
	doRandom (a, N);
	printArray(a,N);
	doRight(a, N);
	cout<<"right\n";
    printArray(a,N);
    doLeft (a, N);
	cout<<"left\n";
    printArray(a,N);
	system("pause");
}