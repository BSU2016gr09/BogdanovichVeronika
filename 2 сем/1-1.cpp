#include <iostream> 
#include <new>
using namespace std;
//Ðàñïîëîæèòü â ïîðÿäêå âîçðàñòàíèÿ ýëåìåíòû ìàññèâà À(N), íà÷èíàÿ ñ k-ãî ýëåìåíòà
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
void sortArray(int * A, int N)
{
    int k;
	cout << "\nEnter index of element from which we will sort = ";
	cin >> k;
	for (int i = k; i < N - 1; i++){
       		for (int j = k; j < N - 1; j++){ if (*(A + j) > *(A + j + 1)) swap(*(A + j), *(A + j + 1));  }
    }
}
