#include <iostream>
using namespace std;


int valor(int v[], int n, int x){
    if(n == 0)
        return -1; 
    else{
        for(int i=0;i<n;){
            if(x==v[i]){
                return i;
            }
            else{
                i++;
            }
         if(i==n-1 and x!=v[i]){
                return -1;}
            
            }}
}

int main () {

    int n;
    cin>>n;
    int vet[n];
    for(int i=0;i<n;i++){
      cin>>vet[i];
    }
    int x;
    cin>>x;

    int resp=valor(vet,n,x);
    cout<<resp;
    return 0;
}