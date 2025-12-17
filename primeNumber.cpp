#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter n value : ";
    cin >> n;

    bool isPrime[n+1];
    for(int i=0;i<=n;i++){
        isPrime[i] = true;
    }
    isPrime[1] = false;
    
    int sqr = sqrt(n);

    for(int i=2;i<=sqr;i++){
        int j=i+i;
        cout << i << " -> ";
        while(j<=n){
            if(isPrime[j]){
                cout << j << " ";
                isPrime[j] = false;
            }
            j=j+i;
        }
        cout << endl;
    } 
    cout << "\nPrime numbers  : ";
    for(int i=1;i<=n;i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
}