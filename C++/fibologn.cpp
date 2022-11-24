#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

long long int fibo(long int n){
    const long int a=1e9+7;
    return ((1/sqrt(5))*pow(((1+sqrt(5))/2),(n+1)))-((1/sqrt(5))*pow(((1-sqrt(5))/2),(n+1)));
}

int main(){
    int n;
    cin>>n;
    int k=int(sqrt(5));
    cout<<k;
}