#include <iostream>


using namespace std;

int main(){
/*
This is not the most efficient way to do the code. But I was out of ideas
So, this works.
*/

//get input
int arr[4];
for(int i = 0; i<4; i++){
	cin >> arr[i];
}

//all the calculuations for the output
cout << 0 << ' ' << arr[0] << ' ' << arr[0] + arr[1] << ' ' << arr[0] + arr[1] + arr[2] << ' ' << arr[0] + arr[1] + arr[2] + arr[3] << endl;
cout << arr[0] << ' ' << 0 << ' ' << arr[1] << ' ' << arr[1] + arr[2] << ' ' << arr[1] + arr[2] + arr[3] << endl;
cout << arr[0] + arr[1] << ' ' << arr[1] << ' ' << 0 << ' ' << arr[2] << ' ' << arr[2] + arr[3] << endl;
cout << arr[0] + arr[1] + arr[2] << ' ' << arr[1] + arr[2] << ' ' << arr[2] << ' ' << 0 << ' ' << arr[3] << endl;
cout << arr[0] + arr[1] + arr[2] + arr[3] << ' ' << arr[1] + arr[2] + arr[3] << ' ' << arr[2] + arr[3] << ' ' << arr[3] << ' ' << 0 << endl;

return 0;
}
