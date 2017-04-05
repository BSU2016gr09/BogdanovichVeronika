#include <iostream>
#include <clocale>
#include <math.h>
#include <cstdlib>

using namespace std;

struct Vector10 {
public:
    float x[10];

    void calcLen() { (*this).len = sqrt(//БЫДЛОКОД не принимаю. Пиши циклы!!!!
                this->x[0] * x[0] + this->x[1] * x[1] + this->x[2] * x[2] + this->x[3] * x[3] + this->x[4] * x[4] +
                this->x[5] * x[5] + this->x[6] * x[6] + this->x[7] * x[7] + this->x[8] * x[8] + this->x[9] * x[9]);
    }

    void printVector() {
        cout << "(" << x[0] << ";";
        for (int i = 1; i < 9; i++) { cout << x[i] << ";"; }
        cout << x[9] << "); ";
        cout << "len = " << len << endl;
    }

    Vector10 sum(Vector10 other) {
        Vector10 rez;
        rez.x[0] = this->x[0] + other.x[0];
        rez.x[1] = this->x[1] + other.x[1];
        rez.x[2] = this->x[2] + other.x[2];
        rez.x[3] = this->x[3] + other.x[3];
        rez.x[4] = this->x[4] + other.x[4];
        rez.x[5] = this->x[5] + other.x[5];
        rez.x[6] = this->x[6] + other.x[6];
        rez.x[7] = this->x[7] + other.x[7];
        rez.x[8] = this->x[8] + other.x[8];
        rez.x[9] = this->x[9] + other.x[9];
        rez.calcLen();
        return rez;
    }

    Vector10 sum2(Vector10 other) {
        Vector10 rez;
    }

private:
    float len;
    float len2 = 0;
};

int main() {
    setlocale(LC_ALL, "Russian");
    int m(2), n = m, p = n + m;
    Vector10 a, b, c;
    a.x[0] = 2;
    a.x[1] = 2;
    a.x[2] = 3;
    a.x[3] = 5;
    a.x[4] = 2;
    a.x[5] = 3;
    a.x[6] = 5;
    a.x[7] = 2;
    a.x[8] = 3;
    a.x[9] = 5;
    a.calcLen();
    a.printVector();
    b = a;
    b.printVector();
    c = a.sum(b);
    c.printVector();
    system("pause");
}
