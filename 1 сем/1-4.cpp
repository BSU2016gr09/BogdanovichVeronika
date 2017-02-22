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
	//Объявить массив вещественных чисел размера N (число N объявить как константу). Проинициализировать значения элементов массива случайными числами из промежутка от -50 до 50.Вывести значения сначала элементов с нечетными коэффициентами (1-й, 3-й, 5-й,...) а затем - с четными.
	setlocale(LC_ALL,"");
    const int N=10;
    int a[N];
	doRandom (a, N);
	printArray(a,N);
	printNumbers1(a,N);
    printNumbers2(a,N);
    system ("pause");
}