#include <iostream>
#include <string>
using namespace std;

int main(){
    int number = 65;
	
    while(number < 90){
        if(number < 70){
            number = 70;
            cout << number << "\n";
        }
        else if( number < 80){
            number++;
            cout << number << "\n";
        }
        number += 3;
        cout << number << "\n";
    } 
	
}
