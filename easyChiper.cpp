// caesar Cryp†graphy

# include <iostream>
# include <stdio.h>
# include <stdarg.h>

using namespace std;

#define STRING_LENGTH 100

int main(){
    string data[STRING_LENGTH];
    string *data_p = data;
    for (int i; i<STRING_LENGTH; i++){
        cin >> *(data_p+i);
    };
    for(int i; i<STRING_LENGTH; i++){
        cout << data[i] << endl;
    };
};