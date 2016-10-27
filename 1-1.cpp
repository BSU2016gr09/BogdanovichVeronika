#include <iostream>
#include <cmath>
using namespace std;
bool doNatural (float n)//что за глагол в названии do? вы что, что то делаете с числом?????
{
	if ((n/floor(n)==1)&&(n>0)) return true;
	else return false;
}
int doSum (int n)
{
 int sum=0;
        while (n>0)
        {
            sum+=n%10;
			n/=10;
        }
		return sum;
}
int main()
{
	//Пользователь вводит с клавиатуры натуральное число, проверить корректность ввода, вычислить и вывести на экран сумму цифр введённого пользователем числа.
    setlocale(LC_ALL,"");
	float n;
    cout<<"Введите любое натуральное число:\n";
    cin>>n;
	if (doNatural(n))
    cout<<"Сумма цифр числа "<<n<<" равнa "<<doSum(n)<<endl;
	else cout<<"Вы ввели не натуральное число\n";
    system("pause");
    return 0;
}
