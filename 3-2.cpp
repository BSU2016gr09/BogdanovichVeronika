#include <iostream>
#include <clocale>
using namespace std;
//� ������� ������� N, ������������ ����.������� �� 0 �� 10, 
//���������� ���������� ���������, ������������� ����� ������ ����.
void createArray(int a[], int N)
{
	int i = 0;
	while (i<N)
	{
		a[i]=rand()%11;
		i++;
	}
}
void printArray(int a[], int N)
{
	int i=0;
	while (i<10)
	{
		cout<<"a["<<i<<"]="<<a[i]<<'\n';
		i++;
	}
}
void test(int a[], int N)
{
	int i=0;
	while (i<N)
	{
		int j=i+1, l=1 ;
		while (j<N)
		{
			if (a[i]==a[j]) 
				l++;
			j++;
		}
		if (l>1) cout << "������� " << a[i] << " ����������� " << l << '\n';
		i=i+l;
	}
}
int main()
{
	setlocale(LC_ALL,"Russian");
	const int N = 10;
	int a[N];
	createArray(a, N);
	printArray(a, N);
	test(a, N);
	system("pause");
}