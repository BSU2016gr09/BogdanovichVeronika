#include <iostream>
#include<clocale>

#include <time.h>

using namespace std;

void give_memory(int**&, int, int);
void give_memory(int *&, int);
void printArray(int **, int, int);
void initArray(int **, int, int);
void delete_memory(int**, int);
void delete_memory(int*);
int findMax(int *, int);
void sortArray(int **, int *, int, int);
void saveMax(int **, int *, int, int);
int rand0m();

int main(){
    setlocale(LC_ALL,"");
    int M;
    int N;
    cout << "¬ведите высоту: ";
    cin >> N;
    cout << "¬ведите ширину: ";
    cin >> M;
    int** arr;
    int * maxArr;
    give_memory(arr, N, M);
    give_memory(maxArr, N);
    initArray(arr, N, M);
    printArray(arr, N, M);
    sortArray(arr, maxArr, N, M);
    printArray(arr, N, M);
    delete_memory(arr, N);
    delete_memory(maxArr);
    arr = nullptr;
    maxArr = nullptr;
	system ("pause");
    }

int rand0m(){
    static int number = time(NULL) % 100000;
    int a = 13;
    int b = 15;
    int c = 5;
    number ^= number << a;
    number ^= number >> b;
    number ^= number << c;
    return number;
}

void sortArray(int ** arr, int * maxArr, int N, int M){
    saveMax(arr, maxArr, N, M);
    int * tmp;
    for(int i = 0; i < N; i++) {
        for(int j = N - 1; j > i; j--) {
            if ( maxArr[j-1] > maxArr[j]) {
                swap(maxArr[j], maxArr[j-1]);
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }
}

int findMax(int * arr, int M){
    int max = arr[0];
    for (int i = 1; i < M; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void saveMax(int ** arr, int * maxArr, int N, int M){
    for(int i = 0; i < N; i++){
        maxArr[i] = findMax(arr[i], M);
    }
}

void give_memory(int *& maxArr, int N){
    maxArr = new int [N];
}

void give_memory(int ** &arr, int N, int M){
    try {
        arr = new int *[N];
        for (int i = 0; i < N; i++) {
            arr[i] = new int[M];
        }
    }
    catch (...) {
        cout << "ѕам€ть не выделилась ";
        exit(0);
    }
}

void printArray(int** arr, int N, int M){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout.width(4);
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void initArray(int** arr, int N, int M){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            arr[i][j] = rand0m() % 10;
        }
    }
}

void delete_memory(int** arr, int N) {
    for (int i = 0; i < N; i++){
        delete [] arr[i];
    }
    delete [] arr;
}

void delete_memory(int * arr){
    delete [] arr;
}
