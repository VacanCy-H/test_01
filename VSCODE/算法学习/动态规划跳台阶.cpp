#include<iostream>
#include<algorithm>
using namespace std;

const int N = 15;
int n;
int dp[N];

int dfs(int n){
    if (dp[n] != 0) return dp[n]; // 添加记忆化检查
    if (n == 1) return dp[n] = 1;
    if (n == 2) return dp[n] = 2;
    return dp[n] = dfs(n-1) + dfs(n-2);
}

int main() {
    cin >> n;
    int dp[N] = {0, 1, 2}; // 直接初始化已知值

    cout << dfs(n);
}