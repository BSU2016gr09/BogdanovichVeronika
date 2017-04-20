//Определить количество слов в строке, которые начинаются на заданную букву.
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
char *s1 = "hello hworlddas h asfdash h fasd sad fsad h";
char s2[1]; 
int k(0);
cout << "Letter: ";
cin >> s2[0];
if (!strncmp(s1, s2, 1)) k++;
char *s3 = strchr(s1,' ');
while(s3 != NULL){
if (!strncmp(s3, s2, 1)) k++;
s3 = strchr(s3, ' ');
if (s3 != NULL) s3 += 1;
}
cout << k << endl;
system("pause");
}
