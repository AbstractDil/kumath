// Quadratic Equation By Souradeep Das
#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,d,L,x1,x2,D;
  printf("Enter the values of a : \n");
  
  scanf("%f", &a);
  printf("Enter the values of b  : \n");
  
  scanf("%f", &b);
  printf("Enter the values of c : \n");
  
  scanf("%f", &c);
  
  d=b*b - 4*a*c; 
  L = -b/(2*a);
  
  if(a==0){
    printf("The equation is not Quadratic.\n ");
  }
  else{
    printf("The equation is Quadratic. \n ");
    
    if(d>0){
      printf("The roots are real and unequal. \n ");
      x1 = L + sqrt(d)/(2*a);
      x2 = L - sqrt(d)/(2*a);
      printf ("x1 = %f ,x2 = %f",x1,x2);

          }
          else{
            if(d<0){
              printf("The roots are imaginary.\n ");
              D = sqrt(fabs(d))/(2*a);
              printf ("x1 = %f + i %f ",L,D);
              printf ("x2 = %f - i %f ",L,D);

            }

            else{
                 printf("The roots are equal.\n");
                 printf("The equal root is = %f",L);

            }
          }
  }
  return 0; 
}
