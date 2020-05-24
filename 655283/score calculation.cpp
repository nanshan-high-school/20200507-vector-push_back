#include <iostream>
#include <vector>
using namespace std;

int main() {    
    bool close = false;
    vector<int> num;
    int input;
    
    do {
            cout << "國文";
            cin >> input;
            num.push_back(input);
            
            cout << "英語";
            cin >> input;
            num.push_back(input);
            
            cout << "數學";
            cin >> input;
            num.push_back(input);
            
            cout << "社會";
            cin >> input;
            num.push_back(input);
            
            cout << "自然";
            cin >> input;
            num.push_back(input);

            cout << "cin (1：continue , 0：end ？)"; 
            cin >> close; 

    } while (close);

    float i = 0;
    for (auto n : num) {
        cout << n <<" ";        
        
        i++;
        float j = i/5;
        
        if (j == (int)j) {
            cout <<endl;
        }
    }

    return 0;
}
