#include <iostream>
#include <clocale>
using namespace std;
void doArray(int a[], int N)
{
	int i=0;
	while (i<N)
	{
		a[i]=(rand()%10100-5000)/100;
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
void doNew(int a[], int N, int b[], int c[], int&j, int&l)
{
	int i=0;
	while (i<N)
	{
		if (a[i] > 0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[l] = a[i];
			l++;
		}
		i++;
	}
}
int main()
{   
	//Объявить массив А вещественных чисел размера N (число N объявить как константу). Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50."Разделить" массив А на два массива: положительные записать в массив В, отрицательные - в С.
	const int N=10;
	int a[N],b[N],c[N];
	int j=0,l=0;
	doArray(a,N);
	printArray(a,N);
	cout << endl;
	doNew(a,N,b,c,j,l);
	cout << '\n';
	printArray(b,j);
	cout <<'\n';
	printArray(c,l);
	system("pause");
}