#include <iostream>
#include <clocale>
using namespace std;
//Массив А целых чисел размера N проинициализировать случайными числами из промежутка от - N до N.
//Не используя функции из задачи 2 - 2 Написать функции циклического сдвинга элементы массива вправо на k элементов
//(1 - й станет 1 + k - ым, 2 - й станет 2 + k - ым и т.д.) и влево на k элементов.
//В main написать вызов этих функций для числа k, которое вводит пользователь.
//Желательно придумать формулу вычисления нового индекса элемента чтобы обойтись одним циклом по массиву А.
void randomArray(int a[], int N)
{
	int i=0;
	while (i<N)
	{
		a[i]=rand()%(N*3+1)-(N*2);//что то тут не то, мне кажется..... проинициализировать случайными числами из промежутка от - N до N.
		i++;
	}
}
void printArray (int a[], int N)
{
int i=0;
while (i<N)
{
	cout<<"i="<<a[i]<<'\n';
	i++;
}
}
void doLeft(int a[], int N, int&k)//а зачем k передавать по ссылке? Пояснить!!!!
{
	int i=0;
	while (i<k)//на паре говорилось, что такой двойной цикл очень медленный!!! Надо было переделать
	{
		int j=0;
		int tmp=a[0];
		while (j<N-1)
		{
			a[j]=a[j+1];
			j++;
		}
		a[N-1]=tmp;
		i++;
	}
}
void doRight(int a[], int N, int&k)
{
	int i= 0;
	while (i<k)
	{
		int j=N-1;
		int tmp=a[N-1];
		while (j>0)
		{
			a[j]=a[j-1];
			j--;
		}
		a[0]=tmp;
		i++;
	}
}
int main()
{
	setlocale (LC_ALL,"");
	const int N=10;
	int a[N], k;
	cout <<"Ââåäè k:\n";
	cin>>k;
	randomArray(a, N);
	printArray(a, N);
	doLeft(a, N, k);
	cout<<"       left\n";
	printArray(a, N);
	doRight(a, N, k);
	cout<<"       right\n";
	printArray(a, N);
	system("pause");
}
