#include <iostream>

using namespace std;

int main() {
/*Analysis:
 *Very simple code, I have the information of if the amount that
 *I output is more than 100, then output a -1 since it is below,
 *and the same for the other two possibilies with 0, and 1 based
 *on the output
 */

//Getting input
	int input;
	cin >> input;

//Formula provided:
	input = (5*input) - 400;
	
//Main code to get output
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
