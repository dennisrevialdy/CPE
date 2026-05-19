#include<iostream>

using namespace std;

int sumofdigit(int n){ //logic for sum of digit
    int sum = 0;
    while(n > 0){
        sum+= n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    while(cin >> n){
        if(n==0) break;
        int sum = 0;
        while(n >= 10){ //keep doing the sum of digit if n >=10
            n= sumofdigit(n);
        }
        cout << n <<endl;
    }
    return 0;
}
