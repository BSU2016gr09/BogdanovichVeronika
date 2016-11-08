#include <iostream>
#include <clocale>
#include <ctime>
//Реализовать операции целочисленной арифметики на массивах размера MAX_SIZE=100 (глобальная константа). 
//В цикле вычислить максимальное возможное на этих массивах число Фибоначчи 1,1,2,3,....
void initA(int A[],int N);
void initA(int A[], int N,int k);
void printA(int A[], int N);
void inputArray(int A[], int N);
void printNumber(int A[], int N);
void sum(int A[],int B[], int C[],int N);
void dif(int A[],int B[],int D[],int N)
using namespace std;
int main()
{
setlocale(LC_ALL, "Russian");
const int maxCount=100;
int A[maxCount],B[maxCount],C[maxCount],D[maxCount];
initA(A,maxCount);
initA(B,maxCount);
initA(C,maxCount);
initA(D,maxCount);
inputArray(A,maxCount);
inputArray(B,maxCount);

printNumber(A,maxCount);
printNumber(B,maxCount);

sum(A,B,C,maxCount);
printNumber(C,maxCount);
dif(A,B,D,maxCount);
printNumber(D,maxCount);
system("pause");
}
void sum(int A[],int B[], int C[], int N)
{
 int i=0, tmp=0;
	 while (i<N)
	 {
       C[i]=A[i]+B[i]+tmp;
	   tmp=C[i]/10;
	   C[i]=C[i]%10;
	 }
}
void dif(int A[], int B[],int D[], int N)
{

   int i=0;
	while (i<N)
	{
		if (A[i]>=B[i])
			D[i]=A[i]-B[i];
		else 
		{ 
			D[i]=A[i]-B[i];
			A[i+1]=A[i+1]-1; 
			A[i]=A[i]+10;
		}
		i++;
	}
}
void initA(int A[], int N)
{
int i = 0;
while (i < N) A[i++] =0;

}
void initA(int A[], int N,int k)
{
int i = 0;
while (i < N) A[i++] = k;
}
void printA(int A[], int N)
{
int i = 0;
while (i<N) cout << A[i++] <<" ";
}
void inputArray(int A[], int N)
{
int k;
int i = 0;
while (i < N)
{ 
cin>>k;
A[i++] = k;
}
}
void printNumber(int A[], int N)
{
int i=N-1;

while (i>=0) cout<<A[i--];
cout<<'\n';
}
