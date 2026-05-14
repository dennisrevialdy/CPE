#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int caseNum = 1;
    
    while(T--){
        if(T > 100) break;
        int a,b; 
        cin >> a >> b; 
        int sum =0;
        if(a % 2 == 0) a++; //if input a is even +1 so a will be odd number
        for(int i= a; i <= b; i+=2){  //a+2 until equal to b
            sum += i; //sum the total 

        }
        cout << "Case "<< caseNum++ << ": " << sum <<endl;

    }

}
