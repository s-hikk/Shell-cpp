#include <iostream>
#include <vector>
#include<string>



using namespace std;

int main(){
    while(true){
        cout << '$';

        string inp;
        getline(cin,inp);

        vector<string> paredInp = parser(inp);
        cout << executeCommand(parsedImp)<<endl;
    }
    return 0;
}