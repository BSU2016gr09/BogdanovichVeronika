//Линейный конгруэнтный генератор псевдослучайных чисел
#include <iostream>
#include <time.h>
using namespace std;

int random(){
    static int x1 = time(NULL) % 1000;
    int x2;
    //int a = 4096, c = 150889, m = 714025; // (a)
    int a = 1096, c = 6252, m = 65395; // (b)
    x2 = (a * x1 + c) % m;
    x1 = x2;
    return x2;
}

int main()
{
	setlocale (LC_ALL,"");
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    for (int i = 0; i < n; i++){ cout << "Случайное число " << i + 1 << ": " <<  random() << "\n";}
	system("pause");
}

