#include <iostream>
#include <string>
using namespace std;

#define VOWELS_NUM 10
string Ruler(string kingdom){

    const char vowels[VOWELS_NUM] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    string result = "Bob";
    char last_char = kingdom.back();

    for (int i; i < VOWELS_NUM; ++i) {
        if (vowels[i] == last_char) {
            result =  "Alice";
            break;
        }
    }
    if (last_char == 'y'){
        result =  "nobody";
        }
    return result;
}
int main(){
    int testcases;
    cin >> testcases;
    string kingdom;
    for (int t=1; t <= testcases; ++t){
        cin >> kingdom;
        cout<<"Case #"<<t<<": "<<kingdom<<" is ruled by "<<Ruler(kingdom)<<"."<<endl;
    }
    return 0;
}
