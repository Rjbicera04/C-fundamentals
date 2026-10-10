#include <iostream>
using namespace std;

int main(){

	int score = 78;
	if(score >= 90){
		cout << "Excellent Work!" << endl;
	}else if (score >= 75){
		cout << "You Passed!" << endl;
	}else{
		cout << "You Failed!" << endl;
	}
	return 0;
}