#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> a; vector<int>b;
     int cinn;
    for(int i=0;i<n;i++){

    cin >> cinn;
        a.push_back(cinn);
    }
    for(int i=0;i<=n;i++){
            cin >> cinn;
        b.push_back(cinn);
    }
int count[150] = {0};
    for(int i = 0;i<= n;i++){
        for(int j =0;j<n;j++){
            if(b[i] == a[j]) {
                count[i] ++;
            }

        }
    }
    for(int i = 0;i<= n;i++){
        /*if(count[i] == 0)*/ cout << count[i] <<  ' ';
    }
    return 0;
}

