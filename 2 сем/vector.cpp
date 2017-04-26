#include <iostream>
#include <clocale>
#include <math.h>
#include <cstdlib>
#include <ctime>
 const int N=100;
using namespace std;

struct Vector {
private:
    float len;
    float x[N];
public:

	Vector(){
		for(int i = 0; i < N; i++) x[i] = 0;
		cout << "Работает конструктор по умолчанию\n"; 
	}
	Vector(float a[N]){
		for(int i = 0; i < N; i++) x[i] = a[i];
		cout << "Работает конструктор с параметрами\n"; 
	}
	Vector(float a){
		for(int i = 0; i < N; i++) x[i] = a;
		cout << "Работает конструктор с параметром числом\n"; 
	}
	Vector(Vector & other){
				for(int i = 0; i < N; i++){	this->x[i] = other.x[i];}
		cout<<"Работает конструктор копирования\n";
        return *this;
	}
	~Vector(){
		cout << "Работает деструктор по умолчанию\n";
	}
		Vector& operator=(Vector & other){
		for(int i = 0; i < N; i++){	this->x[i] = other.x[i];}
		cout<<"Работает оператор присваивания\n";
        
        return *this;
	}
			Vector& operator=(float & f){
		for(int i = 0; i < N; i++){	this->x[i] = f;}
		cout<<"Работает оператор присваивания\n";
        
        return *this;
	}
	Vector& operator+(Vector & other){
		Vector * rez = new Vector;
		for(int i = 0; i < N; i++){
			rez->x[i] = this->x[i] + other.x[i];
		}
        rez->calcLen();
        return *rez;
	}

    void calcLen() { 
		this->len = 0;
		for(int i = 0; i < N; i++){
			this->len += x[i]*x[i];
		}
		this->len = sqrt(this->len);
    }

    void printVector() {
        cout << "(" ;
        for (int i =0; i < N; i++) { cout << x[i] << ";"; }
        cout  << "); ";
        cout << "len = " << len << endl;
    }


};

int main() {
    setlocale(LC_ALL, "Russian");
	srand(time(NULL));\

    Vector a;//Вызывается конструктор по умолчанию
	float arr[N];
    for(int i = 0; i < N; i++){
		arr[i] = rand() % 5 + 1;
	}
	Vector b;b=1;//Вызывается конструктор по умолчанию и затем оператор равно
	Vector c(2);//Вызывается конструктор с параметром - числом
	Vector f(arr);//Вызывается конструктор с параметром - массивом
	Vector j(f);//Вызывается конструктор с параметром - вектором
	Vector * d = new Vector;
	Vector * e = new Vector;
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