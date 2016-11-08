#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
void drawGraph ()
{
	float x=-6,y;
	while (x<=6)
	{
		y=(sin(2*x)/x)*15;
		cout<<setw(y+55)<<"*"<<'\n';
		x+=0.1;
	}
}
	int main ()
	{
		drawGraph();
		system("pause");
	}