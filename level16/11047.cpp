#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int* coin = new int[n];

    for(int i=0; i<n; i++)
        cin >> coin[i];
    
    int ans = 0;
    for(int i = n-1; i>=0; i--){
        if(coin[i] <= k){
            ans += k/coin[i];
            k %= coin[i];
        }
        if(k == 0)
            break;
    }
    cout << ans;

}