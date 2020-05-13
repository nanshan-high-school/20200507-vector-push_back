#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score = {0};
    int a;
    
    cout << "結束請輸入任意大於100或小於0之數\n";
    while(true){
        cin >> a;
        if(a > 100 || a < 0){
            cout << "end";
            break;
        }else{
            score.push_back(a);
        }
    }
}
