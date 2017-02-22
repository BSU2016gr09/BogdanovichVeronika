#include <iostream>
#include <clocale>
using namespace std;
//Массив целых чисел размера N проинициализировать случайными числами из промежутка от 1 до N.
//"Перевернуть" массив (последний элемент станет первым, 1-й станет последним, 2-й поменяется с предпоследним и т.д.) 
//Внимательно проверьте случай нечетного
void doRandom(int a[], int N)
{
	int i=0;
	while(i<N)
	{
		a[i] =(rand()%(10100-5000))/100;//что за магические числа? Надо ведь случайными числами из промежутка от 1 до N.
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
	printArray(a,N); //èñõîäíûé ìàññèâ
	doArray(a, N);
	cout<<"turned\n";
    printArray(a,N);//ïåðåâ¸ðíóòûé
	system("pause");
}
