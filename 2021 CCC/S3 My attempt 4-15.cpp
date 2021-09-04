#include <iostream>
#include <iomanip>

using namespace std;

int main() {

int a;
cin >> a;
const int input = a; //number of students

long double pos[input], walk[input], hear[input];

for(long i = 0; i<input; i++){
	cin >> pos[i] >> walk[i] >> hear[i];
}

long long minPos = 1e9;
for(long i = 0; i<input; i++){ //finding the lowest friend
	if(pos[i]<minPos){
		minPos = pos[i];
}
}

long long maxPos = 0;
for(long i = 0; i<input; i++){ //finding the highest friend
	if(pos[i]>maxPos){
		maxPos = pos[i];
	}
}

long long TotTime;
long long OptTime = 1e9;
for(long C = minPos; C<=maxPos; C++){
	TotTime = 0;
	for(long i = 0; i<input; i++){
		long long Time = 0;
		if((abs(pos[i]-C)-hear[i])>0){
			Time = (abs(pos[i]-C)-hear[i])*walk[i];
		}else{
			Time = 0;
		}
		TotTime += Time;

	}

	if(TotTime<OptTime){
		OptTime = TotTime;
	}
}

cout << OptTime;

  return 0;

}
