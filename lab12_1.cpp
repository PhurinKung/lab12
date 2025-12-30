#include<iostream>
using namespace std;

long long fibonacci(long long n);

int main(){
    long long x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long fibonacci(long long n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}