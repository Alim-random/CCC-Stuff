#include <iostream>
#include <iomanip>


using namespace std;

int main(){

/* Observations:
 * Since each piece of wood is the shape of a trapezoid, by simply
 * applying the formula (sideA + sideB)/2*height. We can get the
 * whole shape area. Doing this with the first side length and the
 * second, we can add each calculations with the piece of wood to
 * get out answer.
 */



//Gets input
long j;
cin >> j;
const long n = j;

//Getiing the vertcal lengths of the fence (left and right side of a piece)
double vertArr[n+1];
	for(long i = 0; i<n+1; i++){
		cin >> vertArr[i];
	}

//Getting the bottem length of the fence (only the bottem peice)
double horArr[n];
	for(long i = 0; i<n; i++){
		cin >> horArr[i];
	}



//Initializing out sum variable which we output at the end
double sum = 0;

//Loops through each piece of fence and does calculuations
for(long i = 0; i<n; i++){
double preSum = 0;
preSum = (vertArr[i] + vertArr[i+1])/2;
preSum = preSum*horArr[i];
sum += preSum;
}


//Since the answer has a decimal, it is best to set our max decimal place to 1 (.0)
//That is what setprecision(1) means. And also add fixed in there too.
cout << fixed << setprecision(1) << (double) sum;
return 0;
}
