#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score;
    cout << "請輸入「-1」以停止輸入。\n";
    while(true) {
        int scoreTemp;
        cout << "請輸入第" << score.size() + 1 << "筆成績：";
        cin >> scoreTemp;
        if(scoreTemp != -1) {
            score.push_back(scoreTemp);
        }
        else {
            for(auto n : score) {
                cout << n << endl;
            }
            break;
        }
    }
}