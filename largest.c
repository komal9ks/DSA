#include<stdio.h>
#include<conio.h>
int main()
{
    system("cls");
      int a,b,c,d;

      printf("Enter 4 numbers: ");
      scanf("%d%d%d%d",&a,&b,&c,&d);

      if(a>b && a>c){
        if(a>d){
        printf("%d is the largest number",a);
        }
        else{
          printf("%d is the largest number",d);
        }
      }
      else if(b>c){
        if(b>d){
        printf("%d is the largest number",b);
        }
        else{
          printf("%d is the largest number",d);
        }
      }
      else if(c>d){
        printf("%d is the largest number",c);

      }
      else
    {
    printf("%d is the largest number",d);
    }   
    return 0;
}