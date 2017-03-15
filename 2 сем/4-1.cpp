//
#include <iostream> 
#include <cstdlib> 
#include <cstring> 

#include <time.h> 

using namespace std; 

int main() { 
char *s1 = "hello hworld"; 
char s2[2]; 
int k(0); 
cout << "Letter: "; 
cin >> s2; 
char *s3 = s2; 
if (strncmp(s1, s3, 1) == 0) 
k++; 
for (int i = 1; i <= strlen(s1); i++) { 
if (*(s1 + i - 1) == ' ' && strncmp(s1 + i, s3, 1) == 0) 
k++; 
} 
cout << k << endl; 
system("pause"); 
}
