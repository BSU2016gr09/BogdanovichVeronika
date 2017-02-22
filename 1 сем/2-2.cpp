#include <iostream>
#include <clocale>
using namespace std;
//Массив целых чисел размера N проинициализировать случайными числами из промежутка от - N до N.
//Циклически сдвинуть элементы массива вправо на 1 элемент
//(последний элемент станет первым, 1 - й станет 2 - м, 2 - й станет 3 - м и т.д.)
//потом циклически сдвинуть элементы массива влево на 1 элемент
//(первый элемент станет последним, 2 - й станет 1 - м и т.д)
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
