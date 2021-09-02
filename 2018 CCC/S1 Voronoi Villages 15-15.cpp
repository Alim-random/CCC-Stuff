#include <iostream>
#include <iomanip>

using namespace std;

int main(){

//get input
int u;
cin >> u;
const int input = u;

double arr[input];
for(int i = 0; i<input; i++){
	cin >> arr[i];
}


//set count to organize array. See if it is already sorted using while loop
int count = 1;
double dummy;
while(count != 0){
	count = 0;
	for(int i = 0; i<input-1; i++){

		if(arr[i]>arr[i+1]){
			dummy = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = dummy;
			count++;
		}
	}

}


//main code. solving for answer at each array value
double point1, point2, spot;
double min = 1e9+1;
for(int i = 1; i<input-1; i++){
	point1 = abs((arr[i] - arr[i-1])/2);
	point2 = abs((arr[i+1] - arr[i])/2);
	spot = point1 + point2;
	if(spot<min){
		min = spot;
	}
}
 //amswer requires one decimal place, thus using setprecision
cout << fixed << setprecision(1) << min;

return 0;
}
