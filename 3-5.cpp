#include <iostream>
#include <clocale>
using namespace std;
//� ��������� ������ ������������������ �� ������������� � ������������� �������� 3 �����. 
//��������, char test[]="(aa[b(c)ddd]e{ee})"; ��������� ������������ ���������� ������ � ���� ��������� 
//c ������� ����� � ������� �������� char. ����� ������������ ��������� ������� ������ (aa[b(c)ddd]e{ee})
//���������� �������� test[0], test[1] ��..�. �.�. � ����� test[i].
int isEmpty(int&top)
{
	if (top==0) 
		return true;
	else return false;
}
int  pushStack(int top,char check[],char stack[],int i)
{
	if (top==10) 
		return false;
	else
	{
		stack[top]=check[i];
		top++;
		return true;
	}
}
int popStack(int&top, char stack[] )
{
	if (top<0)
		return false;
	else 
		return stack[top--];
}
void testCheck(char check[], int m, int top, char st[])
{
	int i=0;
	while (i<m)
	{
		if (check[i] =='['||check[i]=='{'||check[i]=='(') 
			pushStack(top, check, st, i);
		else
			if (check[i]==']'||check[i]=='}'||check[i]==']')
				popStack(top, st);
			else;
			i++;
	}
}

int main()
{
	setlocale(LC_ALL,"");
	char check[] = "(aa[b(c)ddd]e{ee})", st[10];
	int m=strlen(check),top=0;
	testCheck(check, m, top, st);
	if (isEmpty(top)) 
		cout << "�����";
	else cout << "�������";
	system("pause");
}