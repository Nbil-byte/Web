#include <iostream>
using namespace std;

int main(){
    int bpermen;
    int banak;
    cin>>bpermen>>banak;
    int bagi=bpermen/banak;
    int sisa=bpermen-(bagi*banak);
    for(int i=banak;i>0;i--){
        if(i<=sisa){
            cout<<bagi+1<<" ";
        }
        else{
            cout<<bagi<<" ";
        }
    }
}