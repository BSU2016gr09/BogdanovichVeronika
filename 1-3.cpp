#include <iostream>
#include <clocale>
using namespace std;
bool doChecking(float N)
{
	if ((N <= 100) && (N>0) && (N / floor(N) == 1)) return true;
	else return false;
}

void doArray(int a[], int N)
{
	int i = 0;
	while (i<10)
	{
		a[i]=rand()%(3*N+1)-2*N;
		i++;
	}
}
void printArray(int a[])
{
	int i=0;
	while (i<10)
	{
		cout<<"a["<<i<<"]="<<a[i]<<'\n';
		i++;
	}
}
void findPositive(int a[])
{
	int i=0, с=0;
	while (i<10)
	{
		if ((a[i]>0)&&(a[i] % 2==0))
			с++;
		i++;
	}
	cout << endl << "Количество чётных положительных чисел= " <<с;
}
int main()
{
	//Пользователь вводит с клавиатуры натуральное число не большее 100, которое сохраняется в переменную n, проверить корректность ввода, создать массив из 10 случайных целых чисел из отрезка [-2n;n], вывести массив на экран в строку, подсчитать и и вывести на экран количество положительных чётных чисел в массиве.
	setlocale(LC_ALL, "Russian");
	int N;
	int a[10];
	cout << "Введи число не превосходящее 100\n";
	cin >> N;
	if (doChecking(N)) {cout << "Верное число\n";
	doArray(a,N);
	printArray(a);
	findPositive(a);
	}
	else cout << "Закройте программу и введите число заново, вы ввели число больше требуемого\n";
	system("pause");
}