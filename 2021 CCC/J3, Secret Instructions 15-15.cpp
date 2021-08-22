#include <iostream>

using namespace std;


int main() {

	//first 2 digits odd: left
	//first 2 digits even: right
	//first 2 digits is zero: prev instrucion

	//last 3 digits will be the number


int arr[5]; //Create array
string instruction; //define instruction
int input;
cin >> input; //get first input to start while loop

while(input!=99999){
	int convert = input;
		for(int i = 0; i<5; i++){ //Get input into array for later use
			arr[i] = convert%10;
			convert /= 10; //moves up one DECIMAL place. Remember, no rounding occurs while converting
		}
		if(arr[3]+arr[4] == 0){ //in the case the two most left digits' sum are 0
			cout << instruction << " " << arr[2] << arr[1] << arr[0] << endl; //already defined instruction with prevvious inputs below.
		}else{
			if((arr[3] + arr[4])%2 == 0){
				instruction = "right";
			}else{
				instruction = "left";
			}
			cout << instruction << " " << arr[2] << arr[1] << arr[0] << endl;
		}


		cin >> input; // get input to restart the while loop or end if input is 99999.

	}

  return 0;
}
