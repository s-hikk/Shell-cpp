#include<inputParser.h>
#include<sstream>

vector<string> parser(string s){
    stringstream ss(s);
    vector<string> inpParsed;
    string word;

    while(ss >> word){
        inpParsed.push_back(word);
    }
    
    return inpParsed;
}