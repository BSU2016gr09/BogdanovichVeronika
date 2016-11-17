#include <iostream>
#include <clocale>
using namespace std;
// Массив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N.
//"Перетусовать" элементы массива двумя способами, предложенными на паре :
//1) просто меняя местами случайные элементы 2) с использованием доп.массива
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
void doRandom2(int b[], int M)//ты, верно, шутишь? И чем эта ф-ция отличается от doRandom1 ?????
{
	int j=0;
	while(j < M)
	{
		b[j] =rand()%M+1;
		j++;
	}
}
void printArray2 (int b[], int M)//ты, верно, шутишь? И чем эта ф-ция отличается от printArray1 ?????
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
	cout<<"Ïåðâûé ìàññèâ:\n";
    printArray1(a,N);
	doRandom2 (b,M);
	cout<<"\nÂòîðîé ìàññèâ:\n";
    printArray2(b,M);
	changeArray (a, N, b, M);
	system("pause");
}
