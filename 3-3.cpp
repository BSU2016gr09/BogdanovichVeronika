#include <iostream>
#include <clocale>
using namespace std;
//В массиве размера N, заполненного случ.числами от 0 до 10, определить максимальную длину последовательности равных элементов.
int linearMeasurement(int a[], int N)
{
	int i=0, m=0;
	while (i<N)
	{
		int l=1, j=i+1;
		while (j<N)
		{
			if (a[j]==a[i]) l++;
			else
				if (l>m) 
					m=l;
			j++;
		}
		i=i+l;
	}
	return m;
}
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
int main()
{
	setlocale(LC_ALL," ");
	int const N = 10;
	int a[N];
	createArray(a, N);
	printArray(a, N);
	cout <<"Максимальная длина= " << linearMeasurement(a, N)<<'\n';
	system("pause");
}
