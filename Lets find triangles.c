#include <stdio.h>

int main()
{
  int a,b,c;
    printf("Enter Side 1: ");
    scanf("%d",&a);
    printf("Enter Side 2: ");
    scanf("%d",&b);
    printf("Enter Side 3: ");
    scanf("%d",&c);
    
    printf("You entered:\n Side 1:%d.\n Side 2:%d.\n Side 3:%d.\n\n", a,b,c); 
     //int a = 10, b = 11, c = 12;
       if(a>b+c){
          printf("This is a triangle"); 
                }
       else {
          if(b>a+c){
              printf("This is a triangle");
          }
          else {
             if (c>a+b){
                printf("This is a triangle");
                       }
              else{
                 printf("This is not a triangle");
              }
          }
        }

    return 0;
}

       
       
          
  // a, b, c are the sides of a triangle
  // to be sides of a triangle, the sum of any two sides should be bigger than the 3rd.
 //A.M.M.S.Attanayake
  

 
}

