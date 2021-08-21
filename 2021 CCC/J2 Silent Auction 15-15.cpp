#include <iostream>

using namespace std;

int main() {

	
	
//Get input of how many people
int a;
cin >> a;
const int ppl = a; //use "const" since it is necessary for initializing arrays

string name[ppl];
int amount[ppl];

//Input for people and the amount that they bid
for(int i = 0; i<ppl; i++){
	cin >> name[i];
	cin >> amount[i];

}

//Finding max amount
int maxAmm = 0;

for(int i = 0; i<ppl; i++){
	if(amount[i]>maxAmm){ //manually initializing max amount
		maxAmm = amount[i];
	}

}

//Getting the first max amount and output that
//since it is first and highest bid who wins
for(int i = 0; i<ppl; i++){
	if(amount[i] == maxAmm){
		cout << name[i] << endl;
		break; //break ends the loop
	}
}


  return 0;
}
