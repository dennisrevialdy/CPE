#include<iostream>
#include<string>

using namespace std;

int main(){
    string N; //use string for unlimited digit 
    while(cin >> N){ //run until end of programs
        if(N == "0") break; //end program if string is 0

        int sum = 0;
        for(int i = 0; i < N.size(); i++){ //read the string one by one 
            if(i % 2 == 0) sum += N[i] -'0'; //convert string to integer N[i] - '0' and if index is even +
            else sum -= N[i] - '0'; //if index is odd -
        
        
        }
        if(sum%11==0) cout << N << " is a multiple of 11." <<endl;
        else cout << N << " is not a multiple of 11." << endl;
    }
    return 0;
}
