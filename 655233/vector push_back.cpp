#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> grade = {0};
    
    bool stop = false;
    for (auto i : grade) {
            for (int j = 0; j < 1000; j++) {
                if (stop == false) {
                    cout << "�п�J�ǥͪ����Z";
                    int input;     
                    cin >> input;
                    grade.push_back(input);
                    if (input < 0) {
                        stop = true;
                        }   
                    }else {
                        break;
                    }
            } 
    }
}

