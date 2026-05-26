#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        string binary = "";
        int parity = 0;
        int temp =n;

        while (temp > 0){
            binary = char('0' + temp%2) + binary;
            if(temp%2 ==1) parity++;
            temp /=2;
        }
        cout << "The parity of " << binary << " is " << parity  << " (mod 2)."<<endl;
    }
}
