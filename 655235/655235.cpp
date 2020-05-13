#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score(1);
    int now;
    do {
        now = 0;
        cin >> now;
        score.push_back(now);
    } while (now >= 0 && now <= 100);
    score.pop_back();

    int avg = 0;
    for (auto n : score) {
        avg += n;
    }
    
    cout << "全部平均：" << avg / (score.size() - 1);
}