#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score = {0};
    for (int i = 0; i < score.size(); i++){
        cout << "請輸入成績:(結束請輸入大於100的值)";
        cin >> score[i];
        if (score[i] <= 100) {
            score.push_back(i);
        }
        else if (i > 100) {
            break;
        }
    }
    for (int i = 0; i < score.size(); i++){
        if (i >= 2) {
            cout << "score=" << score[i - 1] << "\n";
        }
        else if(i == 0){
            cout << "score=" << score[i] << "\n";
        }
    }
}