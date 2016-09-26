//Bleep out forbidden words listed in a vector.
#include "../std_lib_facilities.h"

int main() {
    vector<string> forbiddenWords = {"Broccoli", "Pears"};
    string forbidden;

//    for (forbidden; cin >> forbidden;) {  //This statement is equivalent to the While() but is more difficult to understand.
    while (cin >> forbidden) {
        for (int j = 1; j <= forbiddenWords.size();) {
            if (forbidden == forbiddenWords[j-1]) {
                cout << "Bleep!" << endl;
            }
            ++j;
        }
    }
    return 0;
}