#include <iostream>

using namespace std;


//declare function for use below
long long move(int C, int pos[], int walk[], int hear[], int input);

int main(){
/*
 NOT MY OWN SOLUTION! But modified to make easier to read (hopefully) and got rid of vectors
 I got this code off of a YT video. All credits go to them
 Video link: https://www.youtube.com/watch?v=o4a9L6334UI
 Please see video for full breakdown and explanation
 */

//fast IO -------------------------------
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
//fast IO -------------------------------


    //Get input
    int n; cin >> n;
    const int input = n;

    int pos[input], walk[input], hear[input];
    int left = 1e9; //very left of the number line
    int right = 0; //very right of the number line

    for(int i = 0; i<n; i++){
        cin >> pos[i] >> walk[i] >> hear[i];
        left = min(left, pos[i]); //getting minimum within the scope of friends
        right = max(right, pos[i]); //getting maximum within the scope of friends
    }


    //Ternary Search for Function Minimum
    long long best = 1e18; //dummy value, no number is going to be this value
    for(int i = 0; i<60; i++){ // i<60 from 2log(2) of 1e9 //explained in the video provided
        int delta = (right-left)/3;
        int m1 = left+delta;
        int m2 = right-delta;
        long long x1 = move(m1, pos, walk, hear, input);
        long long x2 = move(m2, pos, walk, hear, input);
        best = min(x1, best);
        best = min(x2, best);
        if(x1 > x2){
            left = m1;
        }
        else{
            right = m2;
        }
    }

    cout << best  << endl;

    return 0;
}

// Function that takes the position of the concert and returns time takes for everyone to hear it
long long move(int C, int pos[], int walk[], int hear[], int input){
    long long time = 0;
    for(int i = 0; i<input; i++){ // Loop through each friend
        int rnl = pos[i] - hear[i]; // Left and right hearing range
        int rnr = pos[i] + hear[i];

        // Check if the friend can already hear concert
        if(C >= rnl && C <= rnr){
            continue;
        }

        //negating the use of the (if) statement by first setting close to the right hearing range
        //then if the left hearing range is less (closer), we set it equal to the left.
        int close = rnr;
        if(abs(C-rnl) < abs(C-rnr)){
            close = rnl;
        }

        //calculation with the left or right
        time  += (long long)walk[i] * abs(C-close);
    }
    return time;
}

