#include <iostream>


using namespace std;
//NOT MY PERSONAL ANSWER
//I got this answer off of (full solution and explanation):https: //www.youtube.com/watch?v=LthJv1XRHj8
//Not my full answer, but some modifications and explanations to make it easier to read


int main(){
	string letters = "";
	cin >> letters;


int mCount = 0, lCount = 0;	//getting our letter counts
for(int i = 0; i<letters.length(); i++){ //looping through the letters and getting our counts
	if(letters[i] == 'M'){
		mCount++;
	}else if(letters[i] == 'L'){
		lCount++;
	}
}


//Counting letters in each section
//we only count the letters at the section the don't belong in
int section1M = 0, section1S = 0;
for(int i = 0; i<lCount; i++){
	if(letters[i] == 'M'){
		section1M++;
	}else if(letters[i] == 'S'){
		section1S++;
	}
}

int section2L = 0, section2S = 0;
for(int i = lCount; i<lCount+mCount; i++){
	if(letters[i] == 'L'){
		section2L++;
	}else if(letters[i] == 'S'){
		section2S++;
	}
}

int section3L = 0, section3M = 0;
for(int i = lCount+mCount; i< letters.length(); i++){
	if(letters[i] == 'L'){
		section3L++;
	}else if(letters[i] == 'M'){
		section3M++;
	}
}


//Direct Swapping
int swaps = 0;
	//Swapping between section 1 and 2
if(section1M != 0 && section2L != 0){
	if(section1M == section2L){
		swaps += section1M;
		section1M = 0;
		section2L = 0;
	}else if(section1M < section2L){
		swaps += section1M;
		section2L -= section1M;
		section1M = 0;
	}else{
		swaps += section2L;
		section1M -= section2L;
		section2L = 0;
	}
}


	//Swapping between section 1 and 3
if(section3L != 0 && section1S != 0){
	if(section3L == section1S){
		swaps += section3L;
		section3L = 0;
		section1S = 0;
	}else if(section3L < section1S){
		swaps += section3L;
		section1S -= section3L;
		section3L = 0;
	}else{
		swaps += section1S;
		section3L -= section1S;
		section1S = 0;
	}
}


	//Swapping between section 2 and 3
if(section3M != 0 && section2S != 0){
	if (section3M == section2S){
		swaps += section3M;
		section3M = 0;
		section2S = 0;
	}else if(section3M < section2S){
		swaps += section3M;
		section2S -= section3M;
		section3M = 0;
	}else{
		swaps += section2S;
		section3M -= section2S;
		section2S = 0;
	}
}

//Printing calculations and doing triplets
swaps += (section1M + section2L + section3L + section1S + section3M + section2S)/3*2;

cout << swaps;

return 0;
}
