#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
// Построить график функции y=sin(2x)/x на промежутке [-6,6] с шагом 0.1
void drawGraph ()
{
	float x=-6,y;
	while (x<=6)
	{
		y=(sin(2*x)/x)*30;
		cout<<setw(y+55)<<"*"<<'\n';
		x+=0.1;
	}
}
	int main ()
	{
		drawGraph();
		system("pause");
	}
