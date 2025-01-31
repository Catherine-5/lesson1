#include <iostream>
using namespace std;
int main () {
    int arr[3][5]= {{1,2,3,4,5},
                   {6,7,8,9,4},
                   {5,3,3,2,6}};

     for(int i =0 ; i <3; i++){
        for (int j= 0; j<5; j++){
        cout << arr[i][j] ;
      }
      cout << '\n';
     }
    return 0;
}          