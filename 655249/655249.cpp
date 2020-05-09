#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> grades;
    int g;
    do {
        cin >> g;
        grades.push_back(g);
    } while ((g < 100) && (g > 0));

    grades.pop_back();
    cout << "\n";

    for (int i = 0; i < grades.size(); i++) {
        cout << grades[i] << "\n";
    }
}