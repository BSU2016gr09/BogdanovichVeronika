#include <iostream>
#include <cmath>
using namespace std;
bool doNatural (float n)
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
	//������������ ������ � ���������� ����������� �����, ��������� ������������ �����, ��������� � ������� �� ����� ����� ���� ��������� ������������� �����.
    setlocale(LC_ALL,"");
	float n;
    cout<<"������� ����� ����������� �����:\n";
    cin>>n;
	if (doNatural(n))
    cout<<"����� ���� ����� "<<n<<" ����a "<<doSum(n)<<endl;
	else cout<<"�� ����� �� ����������� �����\n";
    system("pause");
    return 0;
}