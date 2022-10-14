#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int people[n],house[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&people[i]);
    }
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&house[i]);
    }
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        int c = 1;
        for(int j = 0 ; j < n ; j++){
            if(people[i]<=house[j]){
                c=0;
                house[j]=0;
                break;
            }
        }
        if(c!=0){
            count++;
        }
    }
    printf("%d",count);
}