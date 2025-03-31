#include<iostream>
using namespace std;


int main(){
    int num;
    cin >> num;
    int a[num];
    for(int i = 0; i < num; i++)
    {
        int total = 0;
        cin >> a[i];
        for(int j = 0; j <= i; j++)
        {
            if(a[i] > a[j]) total++;
        }
        cout << total <<" ";
    }

    system("pause");
    return 0;
}