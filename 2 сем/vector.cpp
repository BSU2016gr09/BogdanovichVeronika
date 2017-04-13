#include <iostream>
#include <clocale>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Vector100 {
private:
    float len;
    float len2;

public:
    float x[100];

    void calcLen() { 
		this->len = 0;
		for(int i = 0; i < 100; i++){
			this->len += x[i]*x[i];
		}
		this->len = sqrt(this->len);
    }

    void printVector() {
        cout << "(" << x[0] << ";";
        for (int i = 1; i < 99; i++) { cout << x[i] << ";"; }
        cout << x[99] << "); ";
        cout << "len = " << len << endl;
    }

    Vector100 sum(Vector100 other) {
        Vector100 rez;
		for(int i = 0; i < 100; i++){
			rez.x[i] = this->x[i] + other.x[i];
		}
        rez.calcLen();
        return rez;
    }

    Vector100 sum2(Vector100 other) {
        Vector100 rez;
    }

};

int main() {
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));
    int m(2), n = m, p = n + m;
    Vector100 a, b, c;
    for(int i = 0; i < 100; i++){
		a.x[i] = rand() % 5 + 1;
	}
    a.calcLen();
    a.printVector();
    b = a;
    b.printVector();
    c = a.sum(b);
    c.printVector();
    system("pause");
}