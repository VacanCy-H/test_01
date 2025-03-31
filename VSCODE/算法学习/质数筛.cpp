#include<iostream>
using namespace std;

bool is_Prime(int n){
    if (n <= 1) return false;   // 小于等于1的数不是质数
    if (n == 2) return true;    // 2是唯一的偶数质数
    if (n % 2 == 0) return false; // 排除其他偶数
    
    // 使用long long类型避免整数溢出，检查奇数因子
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(){

    int num;
    cin >> num;
    int arry[num] = {0};
    int index = 0;

    for(int i = 0, j = 0; i < num; i++, j++){
        cin >> arry[j];
        if(!is_Prime(arry[j])){
            arry[j] = 0;
            j--;
        }
        else index++;
    }


    for(int i = 0; i < index; i++)
    {
        cout << arry[i] << " ";
    }

    system("pause");
    return 0;
}
