#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> score;
    cout << "請輸入成績，輸入完畢請按A:\n";

    string index;
    while (true) {
        cin >> index;
        // cout << index << "\n";
        if (index == "A") {
            break;
        }
        score.push_back(index);       
    }

    while (!score.empty()) {
        string s = score.back();
        cout << s << "\n";

        score.pop_back();
    }
}