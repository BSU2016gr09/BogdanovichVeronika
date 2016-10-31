#include <iostream>
#include <clocale>
using namespace std;
//¬ массиве размера N, заполненного случ.числами от 0 до 10, 
//подсчитать количество элементов, встречающихс€ более одного раза.
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
		if (l>1) cout << "Ёлемент " << a[i] << " повтор€етс€ " << l << '\n';
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