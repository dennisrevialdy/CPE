#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        int count =0;
        for(int i = a; i <= b; i++){ //read number between input a and b 
            int s = (int)sqrt(i); //find the square root of the number and convert it to an integer
            if(s*s == i) count++; //if the square of the integer is equal to
        }
        //example : input 1 10, 1*sqrt(1) = 1, 2*sqrt(2) = 2.8284, 3*sqrt(3) = 5.196, 4*sqrt(4) = 8, 5*sqrt(5) = 11.1803, 6*sqrt(6) = 14.6969, 7*sqrt(7) = 18.5202, 8*sqrt(8) = 22.6274, 9*sqrt(9) = 27, 10*sqrt(10) = 31.6227
        //and the perfect squares between 1 and 10 are 1, 4, and 9. So the count will be 3.
        cout << count << endl;
    }
}
