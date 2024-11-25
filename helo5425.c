#include<stdio.h>
int main(){
 int elei;
 int i;
 int a;
 int b;
 int c;
 char voto;
a=0;
b=0;
c=0;

 scanf("%d",&elei);
 for(i=1; i<=elei; i++){
    printf("qual o seu voto");
    scanf("%c",&voto);
    scanf("%c",&voto);
    if(voto=='a'){
      a++;
    }else if(voto=='b'){
       b++;
    }else if (voto=='c'){
        c++;
    }
      printf("%c",voto);

 }
 printf("candidato A recebeu %d\nvotos",a);
 printf("candidato B recebeu %d\nvotos",b);
 printf("candidato C recebeu %d\nvotos",c);





}