#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int r;
        cin >> r;
        vector<int> s(r);
        for(int i = 0; i < r; i++){
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        // From here we already have the sorted array
        int median = s[r/2]; // get median value from sorted array
        int total = 0;
        for(int i = 0; i < r; i++){ //read all sorted array
            total += abs(s[i] - median); // calculate each array total distance from median
        }           
        cout << total << endl;
    }
    
    return 0;}
