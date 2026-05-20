#include <iostream>
#include <map>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Ignore the newline character after reading T

    map<string, int> country; // Declare the map outside the loop to accumulate counts across test cases

    while (T--)
    {
        string line;
        getline(cin, line); // Read the entire line of input

        string countryName = line.substr(0, line.find(' ')); // Extract the country name
        country[countryName]++; // Increment the count for the country

        
    }
    for (auto it : country)
        {
            cout << it.first << " " << it.second << endl;
        }
    
}
