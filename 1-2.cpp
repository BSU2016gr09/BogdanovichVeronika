#include <iostream>
#include <cmath>
using namespace std;
bool doNatural(float n)
{
	if ((n / floor(n) == 1) && (n>0)) return true;
	else return false;
}
bool doChecking(float n)
{
	if ((n>9999) && (n<100000)) return true;
	else return false;
}
void doNumber(int a[], int n)
{
	int i=0;
	while (n>0)
	{
		a[i]=n%10;
		n/=10;
		i++;
	}
}
int sortArray(int a[], int N)
{
	int j=1,i, answer=0;
	while (j<N)
	{
		i = 0;
		while (i<N-j)
		{
			if (a[i]<a[i+1]) swap(a[i], a[i+1]);
			i++;
		}
		j++;
	}
	answer = a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
	return answer;
}
int main()
{
	//Пользователь вводит с клавиатуры пятизначное натуральное число, которое сохраняется в переменную n, проверить корректность ввода, составить и вывести на экран число из цифр введённого числа n, так, чтобы выведенное число оказалось максимальным из возможных. Например, если пользователь ввёл число 22195, то программа должна вывести число 95221
	setlocale(LC_ALL, "");
	const int N = 5;
	int a[N];
	float n;
	cout << "Введите любое пятизначное натуральное число:\n";
	cin >> n;
	if (doNatural(n))
	{
		if (doChecking(n))
		{
			cout << "Вы ввели пятизначное число\n Вы ввели натуральное число\n";
			doNumber(a, n);
			cout << sortArray(a, N);
		}
		else cout << "Вы ввели не пятизначное число\n";
	}
	else cout << "Вы ввели не натуральное число\n";
	system("pause");
	return 0;
}