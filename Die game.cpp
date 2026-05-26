#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        int top = 1, bottom = 6, north = 2, south = 5, east = 4, west = 3;

        for(int i ; i < n; i++){
        string cmd;
        cin >> cmd;
        int temp; 
        if(cmd == "North"){
            temp = top; top = south; south = bottom; bottom=north; north = temp;
        }
        else if(cmd == "South"){
            temp = top; top = north; north = bottom; bottom=south; south = temp;
        }
        else if(cmd == "East"){
            temp = top; top = west; west = bottom; bottom=east; east = temp;
        }
        else if(cmd == "West"){
            temp = top; top = east; east = bottom; bottom = west; west = temp;
        }
        cout << top << endl;

    }
}
}
