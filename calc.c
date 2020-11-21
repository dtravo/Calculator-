#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 
{ 
    double num1; 
    double num2; 
    int result;
    double total;
    char operator;
    int a;
    a=0;
    
    scanf("%lf %c %lf", &num1, &operator, &num2); 
    
   
      
    switch (operator){
        case'+':

            result = num1 + num2;
            total = num1 + num2;
            
            if((result<-1000) || (result>1000)){
            printf("%d\nLarge number\n", result);
            }
            if((num1 != (int)num1) || (num2 != (int)num2)){
                printf("%lf\n", total);
            }
            else
            {
                printf("%d\n", result);
            }
            
            break; 


        case'-':
            result = num1 - num2; 
            total = num1 - num2;
             if((result<-1000) || (result>1000)){
            printf("%d\nLarge number\n", result);
            }
            if((num1 != (int)num1) || (num2 != (int)num2)){
                printf("%lf\n", total);
            }
           
            else{
                printf("%d\n",result);
            }
    
            break;
        case'*':
            result = num1 * num2; 
            total = num1 * num2;

             if((result<-1000) || (result>1000)){
            printf("%d\nLarge number\n", result);
            }   
            if((num1 != (int)num1) || (num2 != (int)num2)){
                printf("%lf\n", total);
            }
            else{
                printf("%d\n", result);
            }
    
            break; 
        case'/':
            result = num1 / num2;
            total = num1 / num2;

            if(num2 == 0){
            printf("Cannot divide by zero\n");
            }
            else if((num1 != (int)num1) || (num2 != (int)num2)){
                printf("%lf", total);
            }

            else {
                printf("%d\n", result);
            }
            break;


        case'%': 
            if((num1 != (int)num1) || (num2 != (int)num2)){
                printf("Modulo requires integers\n");
            }

            else if(num2 == 0){
            printf("Modulo by zero\n");
            }
            else {
                printf("%d\n", result);
                
            }
            
            break;

        default:
            printf("Unknown operator\n");

    }
       
                    
    


    
    
    
    return 0; 
}
