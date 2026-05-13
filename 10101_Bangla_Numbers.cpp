#include<iostream>

using namespace std;

int main(){
    long long input; //longlong is 19 digit 
    int caseNum = 1;
    while(cin >> input){
        long long kuti = input / 10000000; //divide the input first to get kuti value
        input = input % 10000000; //update the new input 
        long long lakh = input / 100000; //use the new input to get the lakh value
        input = input % 100000;
        long long hajar = input / 1000;
        input = input % 1000;
        long long shata = input / 100;
        input = input % 100;

        cout <<caseNum++ <<". ";
        if(kuti > 0) cout << kuti << " kuti";
        if(lakh > 0) cout << " " << lakh << " lakh";
        if(hajar > 0) cout << " " << hajar << " hajar";
        if(shata > 0) cout << " " << shata << " shata";
        if(input > 0) cout << " " << input;
        cout << endl;

    }
    return 0;
}
