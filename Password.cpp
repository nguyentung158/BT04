#include<iostream>
#include<vector>
using namespace std;
string daongcxau(string k){
    string h = k;
    for(int i=0;i<= k.size()/2;i++){
        swap(h[i], h[h.size()-1-i]);

    }
        return h;
}
int main(){
    int n;
    cin >> n;
    vector < vector <string> > s;
    s.resize(n);
    for(int i =0;i<n;i++){
            string str;
    cin >> str;
         s[i].push_back(str);
    }
    for(int i =0; i< n;i++){
        string k =daongcxau(s[i][0]);
        for(int j =i+1;j<n;j++){
            if (k == s[j][0]) {
                cout << k.size() << ' ' << k[k.size()/2];
                return 0;
            }
        }
    }
}
