#include <iostream>
using namespace std;


int fpb(int a,int b){
    if(a<=b){
        int c=a;
        a=b;
        b=c;
    }
    if(b==0){
        return a;
    }
    else{
        return fpb(b,a%b);
    }
}

int kpk(int a,int b){
    return a*b/fpb(a,b);
}

int main(){
    int min,max,a,b,c;
    cin>>min>>max>>a>>b>>c;
    int kpkduo1=kpk(a,b);
    int kpkduo2=kpk(b,c);
    int kpkduo3=kpk(a,c);
    int kpktig=kpk(kpk(a,b),c);
    int juma=(max/a)+(max/b)+(max/c)-(min/a)-(min/b)-(min/c);
    int kpktri;
    if(kpktig>max){kpktri=0;}
    else{kpktri=(max/kpktig)-(min/kpktig);}
    int kpkduo=((max/kpkduo1)-(min/kpkduo1))+((max/kpkduo2)-(min/kpkduo2))+(max/kpkduo3)-(min/kpkduo3);
    juma=juma-(2*kpkduo)+(3*kpktri);
    cout<<juma;

}