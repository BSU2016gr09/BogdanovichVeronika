#include <iostream>
#include <clocale>
using namespace std;
//В программе задана последовательность из открывающихся и закрывающихся скобочек 3 видов. 
//Например, char test[]="(aa[b(c)ddd]e{ee})"; Проверить правильность растановки скобок в этом выражении 
//c помощью стека в котором хранятся char. Чтобы использовать очередной элемент строки (aa[b(c)ddd]e{ee})
//достаточно написать test[0], test[1] ит.д.,т.е. в цикле test[i].
int isEmpty(int&top)
{
	if (top==0) 
		return true;
	else 
		return false;
}
int  push(int top,char stack[],char check[],int j)
{
	if (top==10) 
		return false;
	else
	{
		stack[top]=check[j];
		top++;
		return true;
	}
}
int pop(int&top, char stack[] )
{
	if (top<0)
		return false;
	else 
		return stack[top--];
}
void testCheck(char check[], int MaxSize, int top, char str[])
{
	int i=0;
	while (i<MaxSize)
	{
		if (check[i]=='['||check[i]=='{'||check[i]=='('||check[i]=='[') 
			push(top, check, str, i);
		else
			if (check[i]==']'||check[i]=='}'||check[i]==')'||check[i]==']') // не вижу никакой проверки, что закрывающая скобка соответствует открывающей!!! Т.е. как ты проверяешь, что может быть ситуация {cc(ааа]c}
				pop(top, str);
			else;
			i++;
	}
}

int main()
{
	setlocale(LC_ALL,"");
	char check[]="(aa[b(c)ddd]e{ee})", st[10];
	int MaxSize=strlen(check),top=0;
	testCheck(check, MaxSize, top, st);
	if (isEmpty(top)) 
	cout << "верно";
	else 
	cout << "неверно";
	system("pause");
}
