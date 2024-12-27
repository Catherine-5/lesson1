#include <iostream>
#define SIZE 3
using namespace std;
int main () {

    const string play_ [] = { "__Play__", "Settings", "Exit"}; 
    const string settings_ [] = { "Play", "__Settings__", "Exit"};
    const string exit_ [] = { "Play", "Settings", "__Exit__"};  
    int current= 0 ;
    while (true)  {
        if(current==0) {
            for (int i= 0; i < SIZE; i++) {
            cout << play_ [i]<< endl;
            }
          
        else if (current==0) {
            for (int i= 0; i < SIZE; i++) {
            cout << settings_[i]<< endl;
            }
        else if(current==0) {
            for (int i= 0; i < SIZE; i++) {
            cout << exit_[i]<< endl;
        char key;
        cin >> key;

        if (key == 'w'){
            index -=1;
        } else if (key == 's'){ 
            index +=1;
            if (key == )
        } else {
            break;
        }
    
    
return 0;
}

   