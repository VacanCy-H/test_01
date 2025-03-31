#include<iostream>
#include<iomanip>
using namespace std;

double n;

bool check(double x, double n){
    if(x * x * x < n){
        return true;
    }
    else return false;
}


int main(){
    cin >> n;
    double l = -100, r = 100;
    for(int i = 0; i < 100; i++){
        double mid = (l + r) / 2;
        if(check(mid, n)){
            l = mid;
        }
        else r = mid;
    }

    cout << fixed << setprecision(6) << l << " " << r;
    return 0;
}