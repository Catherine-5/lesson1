#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
    string str = "Hellow world";
    string str2 = "            ";
     int a=0;
     for (int i= 11; i >=0; i--) {

          str2[a]=str[i];
           a++;
      }
     
      cout << str2;
    return 0;
}