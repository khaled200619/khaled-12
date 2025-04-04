#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
using namespace std;

//project A
// 
//int main() {
//    long long n, m, a;
//    cin >> n >> m >> a;
//
//    long long tiles = ceil((double)n / a) * ceil((double)m / a);
//
//    cout << tiles << endl;
//}

//project B
// 
//int main() {
//    int n;
//    cin >> n; 
//
//    int accepted_projects = 0; 
//
//    for (int i = 0; i < n; i++) {
//        int alice, bob, charlie;
//        cin >> alice >> bob >> charlie;
//
//        int confident_count = alice + bob + charlie;
//
//        if (confident_count >= 2) {
//            accepted_projects++;
//        }
//    }
//    cout << accepted_projects << endl;
//}

//project C
// 
//int main() {
//    int n;
//    cin >> n;
//
//    unordered_map<string, int> catalog;
//
//    for (int i = 0; i < n; i++) {
//        string title;
//        cin >> title;
//
//        if (catalog.find(title) == catalog.end()) {
//            catalog[title] = 0;
//            cout << "OK" << endl;
//        }
//        else {
//            int count = ++catalog[title];
//            string new_title = title + to_string(count);
//            catalog[new_title] = 0; // Mark the new title as used
//            cout << new_title << endl;
//        }
//    }
//}

//project D
// 
//int main() {
//    int n;
//    cin >> n;
//    int T = 0; 
//
//    for (int i = 0; i < n; i++) {
//        string command;
//        cin >> command;
//
//       
//        if (command.find("++") != string::npos) {
//            T++; 
//        }
//        else if (command.find("--") != string::npos) {
//            T--;
//        }
//    }
//    cout << T << endl;
//}

//project E
// 
//int main() {
//    string x;
//    cin >> x;
//
//    for (int i = 0; i < x.size(); i++) {
//        int d = x[i] - '0';
//        int transformed = 9 - d;
//
//        if (i == 0 && d != 0) {
//            x[i] = min(d, transformed) + '0';
//        }
//        else if (i > 0) {
//            x[i] = min(d, transformed) + '0';
//        }
//    }
//     cout << x << endl;
//}
