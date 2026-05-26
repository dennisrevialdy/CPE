#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    int casenum = 1;
    while(T--){
        int n;
        cin >> n;
        long long m[100][100];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> m[i][j];
        
        bool sym = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(m[i][j] < 0) sym = false;
                if(m[i][j] != m[n-1-i][n-1-j]) sym = false;
            }
        }
        if(sym) cout << "Test #" << casenum++ << ": Symmetric" << endl;
        else cout << "Test #" << casenum++ << ": Non-symmetric" << endl;
    }
}
