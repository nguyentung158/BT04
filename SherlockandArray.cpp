#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t ;


    while(t >=1){
        cin >> n;
         int* a = new int[n];
        for(int i =0;i< n;i++){
            cin >> a[i];
        }
        int kqua = 0 ;
        for(int i =0;i< n;i++){
            long long tongtrai= 0;
            long long tongphai =0;
            for(int j = 0;j<i;j++){
                tongtrai = tongtrai +a[j];
            }
            for(int k = i+1;k<n;k++){
                tongphai = tongphai+a[k];
            }
            if(tongphai == tongtrai) {
                kqua = 1;
            }



        }
      if(kqua == 1) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
         delete [] a;
        t--;
    }

}
