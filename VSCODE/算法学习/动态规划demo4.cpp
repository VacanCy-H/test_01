#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;

int row;
int nums[N][N];
int f[N][N];

int main(){
    cin >> row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> nums[i][j];
        }
    }

    for(int i = row; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            f[i][j] =max(f[i + 1][j], f[i + 1][j + 1]) + nums[i][j]; 
        }
    }
    cout << f[1][1];
    return 0;
}

