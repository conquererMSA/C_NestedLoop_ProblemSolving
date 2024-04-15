#include<stdio.h>
#include<limits.h>
/*
print multiplication value of a given number from 1 to 12
345i<=5gn
*/
int main(){
      int givenNumber;
      scanf("%d",&givenNumber);
      for(int i=1; i<=12; i++){
        printf("%d * %d = %d\n",givenNumber,i,i*givenNumber);
      }
    return 0;
}