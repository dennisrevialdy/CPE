#include <iostream>

using namespace std;

int main(){
    long long n, r; 
    while(cin >> n >> r){ //run until end of file
        long long diff =0;
        diff = abs(n - r); //find the different between opponent and you 
        /*
        if(n>r) diff = n-r;
        else diff = r-n;   //2 solution also can use if-else
        */
        cout << diff << endl;
    }
}
