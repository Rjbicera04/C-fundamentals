#include <iostream>
using namespace std;

int main(){
	string colors[] = {"red", "blue", "orange", "violet"};
	
	cout << colors[2] << endl;
	for(int i = 0; i < 4; i++){
		cout << colors[i] << endl;
	}
	return 0;
}