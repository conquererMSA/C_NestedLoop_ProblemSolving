#include<stdio.h>
/*
EOF: end of file porzonto while loop caliye input nite thako...
*/
int main(){
    int n,a;
      while(scanf("%d %d",&n,&a)){
        printf("A-%d ",a);
        if(n==1999){
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
      }
    return 0;
}