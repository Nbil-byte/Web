#include <iostream>
using namespace std;

int main(){
    int baris;
    cin>>baris;
    int siswa[baris];
    int mid;
    if(baris%2==0){
        for(int i=0;i<baris;i++){
            cin>>siswa[i];}
        cout<<"*"<<endl;
        for(int i=0;i<baris;i++){
            for(int j=0;j<siswa[i];j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }

    else{
        mid=(baris/2);
        for(int i=0;i<baris;i++){
            cin>>siswa[i];}
        
        for(int i=0;i<baris;i++){
            for(int j=0;j<(siswa[i]+1);j++){
                if((j==0) && (i!=mid)){
                    cout<<" ";
                }
                else if(j==0 && i==mid){
                    cout<<"*";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
}