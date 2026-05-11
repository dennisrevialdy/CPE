#include <iostream>
#include <set>
using namespace std;
int main(){
    int T;
    int caseNum = 1;
    while(cin >> T){ // Read the number of elements in the sequence
        int b[100]; // Assuming a maximum of 100 elements in the sequence
        for(int i = 0; i < T; i++)
            cin >> b[i];// Read the elements of the sequence
        
        set<int> s; // To store the sums of pairs of elements
        bool isB2 = true; // Flag to check if the sequence is a B2-Sequence
        
        for(int i = 0; i < T; i++){  // Iterate through each element in the sequence
            for(int j = i; j < T; j++){  // Iterate through the elements starting from the current element
                int sum = b[i] + b[j]; // Calculate the sum of the current pair of elements
                if(s.count(sum)){ // Check if the sum already exists in the set
                    isB2 = false; // If it does, then it's not a B2-Sequence
                    break;
                }
                s.insert(sum);// Insert the sum into the set
            }
            if(!isB2) break; // If it's already determined that it's not a B2-Sequence, break out of the loop
        }
        
        
        cout << "Case #" << caseNum++ << ": " << (isB2 ? "It is a B2-Sequence." : "It is not a B2-Sequence.") << endl;
        cout << endl; 
    }
}
