#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        int s,d; 
        cin >> s >> d; //input sum and difference of the scores
        if(s<d) cout << "imposible" << endl;
        else {
            int a=0, b=0; //team a and team b
            a = (s+d)/2; //get the total score of team a
            b = (s-d)/2; //get the total score of team b
            cout << a << " " << b <<endl;
        }
    }
}
