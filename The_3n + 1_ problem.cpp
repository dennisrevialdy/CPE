#include <iostream>

using namespace std;

int main(){
    int i,j;
    while(cin >> i >> j){

        int start = min(i,j);
        int end = max(i,j);
    
        int max =0;
        for(int k = start; k<=end ;k++){
            int n = k;
            int count = 1;
            while(n!=1){
                if(n%2==1){ //odd
                    n = 3*n + 1;
                }
                else 
                {
                    n= n/2; //even
                }
                count++;
            } 
            if(count > max){
                max = count;
            }
        }     
        cout << i<<" "<<j<<" "<<max <<endl;
    }
}
