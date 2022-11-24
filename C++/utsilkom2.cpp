#include <iostream>
using namespace std;

int pindah(int arr[],int leng){
    int naik=1;
    int turun=-1;
    int datar=0;
    int kondisi=0;
    int kondisi_sebelumnya=0;
    int gigi=0;
    for(int i=1;i<leng;i++){
        if(arr[i]>arr[i-1]){
            kondisi=naik;
        }
        else if(arr[i]==arr[i-1]){
            kondisi=datar;
        }
        else{
            kondisi=turun;
        }

        if(kondisi!=kondisi_sebelumnya){
            kondisi_sebelumnya=kondisi;
            gigi+=1;
        }
    }
    return gigi+=1;
}

int main(){
    int km;
    cin>>km;
    int tinggi[km];
    for(int i=0;i<km;i++){
        cin>>tinggi[i];
    }
    cout<<pindah(tinggi,sizeof(tinggi)/sizeof(int));
}