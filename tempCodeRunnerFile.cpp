#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

int fibo(int n){
    return (1/sqrt(5))*pow(((1+sqrt(5))/2),(n+1))-((1/sqrt(5))*pow(((1-sqrt(5))/2),(n+1)));
}

int main(){
    cout<<fibo(6);
}