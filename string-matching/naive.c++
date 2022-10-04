#include<stdio.h>
#include<iostream>
using namespace std;
// Complejidad de O(n^2)
void naiveAlgoritm(string Text,string pat){
    // length of the string
    int n = Text.size();
    // Length of the pattern
    int m = pat.size();
    // We iterate inside the pathern 
    // until the n -m in order  to not have a range out of index 
    for(int s = 0 ; s < n-m;s++){
        // it will help to find out if , we are into a possible
        // pat in out string
        int shift ;
        for(shift=0 ; shift<=m;shift++){
            if(Text[shift+s] != pat[shift]){
                break;
            }
        }
        if(shift ==m){
            cout<<"Todo gucci"<<"\n";
            return;
        }
    }
    cout<<"No se encontro patron"<<"\n";

}

int main(){
    naiveAlgoritm("acaabc","aab");
}