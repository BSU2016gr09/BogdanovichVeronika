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
void doNew(int a[], int N, int b[], int c[], int&j, int&l)//зачем тут int&j, int&l ?????????? это же просто индексы????
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
	//Îáúÿâèòü ìàññèâ À âåùåñòâåííûõ ÷èñåë ðàçìåðà N (÷èñëî N îáúÿâèòü êàê êîíñòàíòó). Ïðîèíèöèàëèçèðîâàòü çíà÷åíèÿ ýëåìåíòîâ ìàññèâà ñëó÷àéíûìè ÷èñëàìè èç ïðîìåæóòêà îò -50 äî 50."Ðàçäåëèòü" ìàññèâ À íà äâà ìàññèâà: ïîëîæèòåëüíûå çàïèñàòü â ìàññèâ Â, îòðèöàòåëüíûå - â Ñ.
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
