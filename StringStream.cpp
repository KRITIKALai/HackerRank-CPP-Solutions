#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss1(str);
    stringstream ss2(str);
    int ch;
    vector<int> vect;
    char bekar;
    int pura_bekar;
    while((ss1 >> ch >> bekar)||(ss2 >> pura_bekar)){
        vect.push_back(ch);
    }
    return vect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

