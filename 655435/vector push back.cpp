#include <iostream>
using namespace std;
#include <vector>
int main() {
    vector<int> score;
    cout << "input your score,input -1 to stop" <<"\n";
    while(true) {
        int a = 0;
        cin >> a;
        if (a >= 0) {
        score.push_back(a);
        }   
        else 
            for (auto n : score) {
                cout << endl;
                cout << n << "\n";
            }
    }
}
