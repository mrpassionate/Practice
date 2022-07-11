#include<iostream>
#include<cstdlib>
using namespace std;

int cmf(const void *a, const void *b){
    return  (*(int*)b - *(int*)a);
}

int main(){
    int ara[]={5,3,95,83,70};
    int i;
    qsort(ara,5,sizeof(int),cmf);
    for(i=0;i<5;i++){ 
        cout<<ara[i]<<"\n";

    }
    return 0;
}
