#include <iostream>
#include <clocale>
#include <math.h>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Vector100 {
private:
    float len;

public:
    float x[100];
	Vector100(){
		for(int i = 0; i < 100; i++) x[i] = 1;
		cout << "Работает конструктор по умолчанию\n"; 
	}
	~Vector100(){
		cout << "Работает деструктор по умолчанию\n";
	}
	Vector100& operator+(Vector100 & other){
		Vector100 * rez = new Vector100;
		for(int i = 0; i < 100; i++){
			rez->x[i] = this->x[i] + other.x[i];
		}
        rez->calcLen();
        return *rez;
	}

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


};

int main() {
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));
    int m(2), n = m, p = n + m;
    Vector100 a, b, c, f;
    for(int i = 0; i < 100; i++){
		a.x[i] = rand() % 5 + 1;
	}

	Vector100 * d = new Vector100;
	Vector100 * e = new Vector100;
	*e = a;

    a.calcLen();
    a.printVector();
    b = a;
    b.printVector();
	cout << "\n\n\n";
    c = a + b;
    c.printVector();
	cout << "\n\n\n";
	f = *e + *d;
	f.printVector();
	delete e;
	delete d;
	system("pause");
}
