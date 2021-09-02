#include <iostream>


using namespace std;

int main(){

//first input is labeling an N x N gird

/*
while(left<right){  //which is incorrect
rotate nums 90 degrees

} //when done and is correct, print result


from simulating all the rotations by printing the two-dimentional
array from different angles, this prints out the correct order of the array.

 */

//get input
int n; cin >>n;
const int input = n;

//getting our max and min to calculate rotations
int min = 1e9 + 1, max = 0;

int arr[input][input]; //array to calculate rotations
for(int x = 0; x<input; x++){
	for(int y = 0; y<input; y++){
		cin >> arr[x][y];
		if(arr[x][y]<min){
			min = arr[x][y];
		}if(arr[x][y]>max){
			max = arr[x][y]; //Note: Dimetions are NOT [x][y] as (x, y) but backwards and flipped
		}
	}
}

int ARR[input][input];//new array in use
for(int i = 0 ; i<input; i++){
	for(int j = 0; j<input; j++){
		ARR[j][i] = arr[j][i];
	}
}
//rotations calculations
int rotateCount = 0, dummy;
while(arr[0][0] != min && arr[input-1][input-1] != max){
	dummy = arr[0][0];
	arr[0][0] = arr[0][input-1];
	arr[0][input-1] = arr[input-1][input-1];
	arr[input-1][input-1] = arr[input-1][0];
	arr[input-1][0] = dummy;

	rotateCount++;
}


//printing based on rotate count
if(rotateCount == 0){
	for(int i = 0; i<input; i++){
		for(int j = 0; j<input; j++){
			cout << ARR[i][j] << ' ';
		}
		cout << endl;
	}
}else if(rotateCount == 1){
	for(int i = input-1; i>=0; i--){
		for(int j = 0; j<input; j++){
			cout << ARR[j][i] << ' ';
		}
		cout << endl;
	}
}else if(rotateCount == 2){
	for(int i = input-1; i>=0; i--){
		for(int j = input-1; j>=0; j--){
			cout << ARR[i][j] << ' ';
		}
		cout << endl;
	}
}else if(rotateCount == 3){
	for(int i = 0; i<input; i++){
		for(int j = input-1; j>=0; j--){
			cout << ARR[j][i] << ' ';
		}
		cout << endl;
	}
}

return 0;
}
