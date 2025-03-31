#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


int main(){
    int num;
    vector<int> a;
    cin >> num;
    while(num > 0){
        a.push_back(num);
        if(num == 1) break;
        if(num % 2 != 0)
        {
            num = num * 3 + 1;
        }
    else
        {
            num /= 2;
        }
    }
    
    for (vector<int>::reverse_iterator rit = a.rbegin(); rit != a.rend(); ++rit) {
        cout << *rit << " ";
    }

    system("pause");
    return 0;  
}
