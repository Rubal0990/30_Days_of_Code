#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double y;
    string input_string; 
    
    cin >> x;
    cin >> y;
    cin.ignore();
    getline(cin, input_string); 
    
    cout << x + i << endl;
    cout << setprecision(1) << fixed << (y + d) << endl;
    cout << s + input_string << endl;

    return 0;
}