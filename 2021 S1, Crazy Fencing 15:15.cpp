#include <iostream>
#include <iomanip>

using namespace std;

int main(){
long j;
cin >> j;
const long n = j;

double vertArr[n+1];
	for(long i = 0; i<n+1; i++){
		cin >> vertArr[i];
	}

double horArr[n];
	for(long i = 0; i<n; i++){
		cin >> horArr[i];
	}



double sum = 0;

for(long i = 0; i<n; i++){
double preSum = 0;
preSum = (vertArr[i] + vertArr[i+1])/2;
preSum = preSum*horArr[i];
sum += preSum;
}

cout << fixed << setprecision(1) << (double) sum;
return 0;
}
