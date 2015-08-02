#include<iostream>
using namespace std;
int fib(int i);
int main(){
    int N;
    cin>>N;
    cout<<fib(N)<<endl;
}

int fib(int i){
    if(i<=1) return i;
    else return fib(i-1)+fib(i-2);
}
