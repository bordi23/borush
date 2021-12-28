#include<iostream>
using namespace std;
int get(string s) {
    int nm = 1;
    int curr = 0;
    for (int z = 0; z < s.size(); ++z) {
        if (s[z] == 'B')nm = -1;
        if (s[z] == 'B' || s[z] == 'A')break;
        curr *= 10, curr += s[z] - '0';
    }
    return curr * nm;
}
int main() {
    string f, s;
    cin >> f >> s;
    int F = get(f);
    int S = get(s);
    if (F < 0)++F;
    if (S < 0)++S;
    cout << S - F;
    return 0;
}