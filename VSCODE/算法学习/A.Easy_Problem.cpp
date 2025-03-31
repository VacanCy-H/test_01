#include<bits/stdc++.h>
using namespace std;

const int N = 100;
int times;
int a[N];

int main(){
    cin >> times;
    for(int i = 1; i <= times; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= times; i++){
        int count = 0;
        for(int j = 1; j <= a[i] / 2; j++){
            count++;
            if((j == a[i] / 2)  && a[i] % 2 == 0){
                cout << (count - 1) * 2 + 1 << endl;
            }
            else if((j == a[i] / 2 - 1) && a[i] % 2 != 0){
                cout << count * 2 << endl;
            }
        }
    }

    return 0;
}