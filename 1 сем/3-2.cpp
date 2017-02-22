#include <iostream>
#include <clocale>
using namespace std;
//В массиве размера N, заполненного случ.числами от 0 до 10,  
//подсчитать количество элементов, встречающихся более одного раза.
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
	while (i<10)//Ай,ай, ай  тут не 10 надо
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
		if (l>1) cout << "Элемент " << a[i] <<'\n'<< "Будет повторяться: " << l << '\n';
		i=i+l;//тут я не понял вообще... Это +1 или +L ???? Что ты хотела? Подойди и поясни...
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
