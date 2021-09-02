#include <iostream>



using namespace std;

int main(){
/*
Looping through an array and comparing each index of the string.
With that, calculaing the count and from the count is our answer.
Negate the count++ on indexes with same "." . Only count the letters
*/
//Another note: since strings can be expressed with each character
//as a index inside the string, we can state the simmiliar character for it.

//Get input
int u;
cin >> u;
const int input = u;

string arr;
string arr2;

//getting string input
cin >> arr;
cin >> arr2;

//Main code
int count = 0;
for(int i = 0; i<input; i++){
	if(arr[i] == arr2[i] && arr[i] !='.'){
		count++;
	}
}

cout << count;




return 0;
}
