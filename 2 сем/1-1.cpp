#include <iostream> 
#include <new>
using namespace std;
//Расположить в порядке возрастания элементы массива А(N), начиная с k-го элемента
void enterArray(int* pa, int N);
void printArray(int* pa, int N);
void sortArray(int* pa, int N);

int main()
{
	int N;
		cout << "The number of array elements = ";
		cin >> N;
	int* pm = new(nothrow) int[N];
		if (!pm){ cout<<"Memory is no longer"; return 0;}
		cout << "Enter array:\n";
			enterArray(pm, N);
			sortArray(pm, N);
			printArray(pm, N);
		delete[] pm;
	system("pause");
}

void enterArray(int* pa, int N)
{
	for (int i = 0;i < N;i++)
		cin >> *(pa + i);
}

void printArray (int* pa, int N)
{
int i=0;
while (i <N)
{
	cout<<"i="<<pa[i]<<'\n';
	i++;
}
}

void sortArray(int* pa, int N)
{
	cout << "Enter index of element from which we will sort = ";
	int b;
	cin >> b;
	for (; b < N; b++)
		for (int j=b; j < N; j++)
			if (*(pa + b) > *(pa + j)) swap(*(pa + b),*(pa + j));
}