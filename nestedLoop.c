#include<stdio.h>
//shudhu matro assignment er kkhetre post increament hobe: i++, age assign hobe, pore barbe
//shudhu matro assignment er kkhetre pre increament hobe: ++i, age barbe, pore assign hobr 1,2,3,4,5i n=5
int main(){
      int N;
      scanf("%d",&N);
      if(N<=1){
        printf("%d\n",-1);
      }else{
        for(int i=1;i<=N;i++){
            if(i%2==0){
                printf("%d\n",i);
            }
        }
      }
}