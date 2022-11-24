#include <iostream>
using namespace std;

bool prima(int b){
    bool bul=true;
    if(b<=2){bul=false;}
    else if(b==3){bul=true;}
    else{
        for(int i=2;i*i<=b;i++){
            if(b%i==0){
                bul=false;
                break;
            }
        }
    }
    return bul;
}

int main(){
    const long int o=1e9+7;
    double y=2.5;
    cout<<y%o;
    int N;
    int a=0;
    cin>>N;
    int max[N];
    int min[N];
    for(int i=0;i<N;i++){
        cin>>min[i];
        cin>>max[i];
    }
    for(int i=0;i<N;i++){
        for(int j=min[i]+1;j<=max[i];j++){
            if(prima(j)){
                a++;
            }
        }
        cout<<a<<endl;
    }

    return 0;
}