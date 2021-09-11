#include <iostream>

using namespace std;


int main(){

/*
Logic:
Create a letter count and count the number of V's and H's. Then we set them
to be either 1 (if the result is odd) or 0 (if the result if true). Then, using
this data, we print out the set of numbers with the if statement based on the data.
*/

//Get input
string input;
cin >> input;

//Getting the count
int Hcount = 0, Vcount = 0;
for(int i = 0; i<input.length(); i++){
	if(input[i] == 'H'){
		Hcount++;
	}else{
		Vcount++;
	}
}

//simplifying the H's and V's
if(Hcount%2==0){
	Hcount = 0;
}else{
	Hcount = 1;
}

if(Vcount%2==0){
	Vcount = 0;
}else{
	Vcount = 1;
}

//Output based on the number of H's and V's
if(Hcount == 1 && Vcount == 1){
	cout << "4 3" << endl;
	cout << "2 1" << endl;
}else if(Hcount == 1 && Vcount == 0){
	cout << "3 4" << endl;
	cout << "1 2" << endl;
}else if(Hcount == 0 && Vcount == 1){
	cout << "2 1" << endl;
	cout << "4 3" << endl;
}else if(Hcount == 0 && Vcount == 0){
	cout << "1 2" << endl;
	cout << "3 4" << endl;
}


    return 0;
}
