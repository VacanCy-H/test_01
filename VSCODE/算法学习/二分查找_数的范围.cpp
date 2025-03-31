#include<iostream>
using namespace std;

const int N = 100010;
int len, que;
int nums[N];


int Binary_search_start(int nums[], int len, int x){
    int l = -1, r = len;
    while(l + 1 < r){
        int mid = (l + r) / 2;
        if(nums[mid] < x){
            l = mid;
        }
        else r = mid;
    }
    if(nums[r] == x){
        return r;
    }
    else return -1;  
}

int Binary_search_end(int nums[], int len, int x){
    int l = -1, r = len;
    while(l + 1 < r){
        int mid = (l + r) / 2;
        if(nums[mid] <= x){
            l = mid;
        }
        else r = mid;

    }
    if(nums[l] == x){
        return l;
    }
    else  return -1;     
}

int main(){
    cin >> len >> que;
    for(int i = 0; i < len; i++){
        cin >> nums[i];
    }

    while(que--){
        int x;
        cin >> x;
        int res1 = Binary_search_start(nums, len, x);
        int res2 = Binary_search_end(nums, len, x);
        cout << res1 << " " << res2;
    }

    return 0;
}
