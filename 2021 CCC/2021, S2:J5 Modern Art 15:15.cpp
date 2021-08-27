#include <iostream>


using namespace std;


int main(){
//NOTE: Not my thought out solution.
//Please see video of the person who solved this:
//video: https://www.youtube.com/watch?v=Htmx7Ym8JVE
//P.S. all credits go to him

//input for grid size
int m, n;
cin >> m >>n;

//input for inputs below
int k;
cin >> k;

//Getting the "false" bool into out variables.
bool R[m+1], C[n+1];
for(int x = 1; x<=m; x++){
	R[x] = false;
}
for(int y = 1; y<=n; y++){
	C[y] = false;
}



//getting each number and setting the value or bool at that position in array
char letter;
int number;
for(int i = 0; i<k; i++){
	cin >> letter;
	cin >> number;

	if(letter == 'R'){
		R[number] = !R[number]; //switch it to opposite bool at the number index to negate repeats
	}else{
		C[number] = !C[number];
	}
}

//creating our grid
bool grid[m+1][n+1];
for(int x = 1; x<=m; x++){
	for(int y = 1; y<=n; y++){
		grid[x][y] = false; //creating our grid with "false" bool at each index
	}
}

//making calculations in grid for the row values
for(int x = 1; x<=m; x++){
	if(R[x]){ //if true
		for(int y = 1; y<=n; y++){
			grid[x][y] = !grid[x][y]; //set to opposite
		}
	}
}

//making calculations in grid for column values
for(int y = 1; y<=n; y++){
	if(C[y]){//if true
		for(int x = 1; x<=m; x++){
			grid[x][y] = !grid[x][y]; //set to opposite
		}
	}
}


//getting our G count since we output the number of Gold grids there are
int gCount = 0;
for(int x = 1; x<=m; x++){
	for(int y = 1; y<=n; y++){
		if(grid[x][y]){
			gCount++;
		}
	}
}
//Output
cout << gCount;
return 0;
}
