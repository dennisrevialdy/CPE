#include <iostream>
#include <set>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    string results[1000];  // save result
    int ori[1000];   // save ori
    
    for(int i = 0; i < T; i++){
        int n;
        cin >> n;
        ori[i] = n;  // save ori n
        
        set<int> seen;
        bool happy = false;
        
        while(n != 1){
            if(seen.count(n)){ //if sum = n stop the loop and happy = false
                happy = false;
                break;
            }
            seen.insert(n);
            int sum = 0;
            while(n > 0){
                int digit = n % 10; //get the last digit of number
                n = n / 10; //get the first digit of number
                sum += digit * digit; //get sum
            }
            n = sum; //return sum back to n and start the loop again
        }
        
        if(n == 1) happy = true; //if n = 1 stop the loop and happy = true
        
        if(happy) results[i] = "Happy";
        else results[i] = "Unhappy";
    }
    
    // cetak semua di akhir
    for(int i = 0; i < T; i++){
        cout << "Case #" << i+1 << ": " << ori[i] << " is a " << results[i] << " number." << endl;
    }
}
