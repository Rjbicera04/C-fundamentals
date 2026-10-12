#include <iostream>
using namespace std;

int main(){
    int age = 17;
    bool hasStudentID = true;

    if (age < 18 && hasStudentID){
        cout << "(test 1) Discount approved" << endl;
    } else {
        cout << "(test 1) Discount denied" << endl;
    }

    hasStudentID = false;

    if (age < 18 && hasStudentID){
        cout << "(test 2) Discount approved" << endl;
    } else {
        cout << "(test 2) Discount denied" << endl;
    }
    return 0;
}