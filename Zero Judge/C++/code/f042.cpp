#include <iostream>
#include <vector>

using namespace std;

void f042() //All TLE (1s) //Please tell me WHY!!
{
    vector<char> s, w1, w2;
    char input;
    
    while (true) {
        input = cin.get();
        if (input == *"\n") {
            break;
        }
        else {
            s.resize(s.size() + 1);   //
            s[s.size() - 1] = input;  //or s.push_back(input);
        }
    }
    while (true) {
        input = cin.get();
        if (input == *"\n") {
            break;
        }
        else {
            w1.resize(w1.size() + 1);
            w1[w1.size() - 1] = input;
        }
    }
    while (true) {
        input = cin.get();
        if (input == *"\n") {
            break;
        }
        else {
            w2.resize(w2.size() + 1);
            w2[w2.size() - 1] = input;
        }
    }

    bool needReplace = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == w1[0]) {
            for (int j = 0; j < w1.size(); j++) {
                if (j == w1.size() - 1) {
                    if (s[i + j] == w1[j]) {
                        needReplace = true;
                    }
                }
                else {
                    if (s[i + j] != w1[j]) {
                        break;
                    }
                }
            }

            if (needReplace == true) {
                for (int j = 0; j < i; j++) {
                    cout << s[j];
                }
                for (int j = 0; j < w2.size(); j++) {
                    cout << w2[j];
                }
                for (int j = 0; j < s.size() - w1.size() - i; j++) {
                    cout << s[j + i + w1.size()];
                }
                cout << endl;

                break;
            }
        }
    }
}

int main()
{
    while (true)
    {
        f042();
    }
}