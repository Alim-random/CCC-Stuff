#include <iostream>



using namespace std;

int main(){


//Get input
int arr[4] ;
for(int i = 0; i<4; i++){
	cin >> arr[i];
}

//Check the conditions of the telemaker numbers and print answer
if((arr[0] == 8)||(arr[0] == 9)){
	if((arr[3] == 8)||(arr[3] == 9)){
		if(arr[1]==arr[2]){
			cout << "ignore";
		}else{
			cout << "answer";
		}
	}else{
		cout << "answer";
	}
}else{
	cout << "answer";
}


return 0;
}
