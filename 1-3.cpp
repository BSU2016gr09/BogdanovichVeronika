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
	int i=0, �=0;
	while (i<10)
	{
		if ((a[i]>0)&&(a[i] % 2==0))
			�++;
		i++;
	}
	cout << endl << "���������� ������ ������������� �����= " <<�;
}
int main()
{
	//������������ ������ � ���������� ����������� ����� �� ������� 100, ������� ����������� � ���������� n, ��������� ������������ �����, ������� ������ �� 10 ��������� ����� ����� �� ������� [-2n;n], ������� ������ �� ����� � ������, ���������� � � ������� �� ����� ���������� ������������� ������ ����� � �������.
	setlocale(LC_ALL, "Russian");
	int N;
	int a[10];
	cout << "����� ����� �� ������������� 100\n";
	cin >> N;
	if (doChecking(N)) {cout << "������ �����\n";
	doArray(a,N);
	printArray(a);
	findPositive(a);
	}
	else cout << "�������� ��������� � ������� ����� ������, �� ����� ����� ������ ����������\n";
	system("pause");
}