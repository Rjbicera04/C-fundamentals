#include <iostream>
#include <string>
using namespace std;

int main(){
    
    for (int i = 0; i < 7; i++){
        string star(i, '*');
        cout << star << endl;
    }

    for (int i = 0; i < 5; i += 2){
        cout << i << endl;
    }

    for (int i = 5; i > 0; i--){
        cout << i << endl;
    }

    return 0;
}