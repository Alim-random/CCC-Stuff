#include <iostream>

using namespace std;

int main() {

	int input;
	cin >> input;

	input = (5*input) - 400;
	if(input>100){
		cout << input << endl;
		cout << "-1" << endl;
	}else if(input<100){
		cout << input << endl;
		cout << "1" << endl;
	}else{
		cout << input << endl;
		cout << "0" << endl;
	}

  return 0;
}
