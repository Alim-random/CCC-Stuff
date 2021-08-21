#include <iostream>

using namespace std;

int main() {

int a;
cin >> a;
const int ppl = a;

string name[ppl];
int amount[ppl];

for(int i = 0; i<ppl; i++){
	cin >> name[i];
	cin >> amount[i];

}

int maxAmm = 0;

for(int i = 0; i<ppl; i++){
	if(amount[i]>maxAmm){
		maxAmm = amount[i];
	}

}

for(int i = 0; i<ppl; i++){
	if(amount[i] == maxAmm){
		cout << name[i] << endl;
		break;
	}
}


  return 0;
}
