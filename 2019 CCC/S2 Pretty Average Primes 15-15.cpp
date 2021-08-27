#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x){ //fucntion to see if number is prime and return bool
	bool prime = true;
		for(int i = 2; i<sqrt(x)+1; i++){
			if(x%i==0){
				prime = false;
				break;
			}
		}

	return prime;

}



int main(){
/*Logic:
 * If our number is prime, the we print the number out twice since for example:
 * 7 = (7+7)/2, same for 5, 11, 13, etc.
 *
 * If out number is even, the we make a loop and increment each odd number of the
 * loop since even numbers are never odd (except 2, but the question would only give us
 * numbers more than 3). Thus, only looping through the first number and seeing if that
 * is prime and if it is, subtract the original number from that, and if that is also prime
 * we have our two numbers.
 */


//Get input
int u; cin >> u;
const int input = u; //have to use const int for size of arrays
int arr[input];
for(int i = 0; i<input; i++){
	cin >> arr[i];
}

for(int index = 0; index<input; index++){ // looping through each num in array
	if(isPrime(arr[index])){ //If num is prime
		cout << arr[index] << " " << arr[index] << endl; //Print the number twice
	}else{
		int number = arr[index]*2;
		for(int i = 3; i<number; i+=2){
			if(isPrime(i) && isPrime(number-i)){
				cout << i << " " << number-i << endl;
				break; //skip to next number since we have our answer
			}
		}
	}

}

return 0;
}
