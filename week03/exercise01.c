#include <stdio.h>

int main (){

   int a =15 ;
   int b = 20 ;
    int c = 8 ;

       // arithmetic operators
   printf("addition of a and b is %d\n" ,a+b);
    printf("subtraction of a and b is %d\n" ,a-b);
     printf("multiplication of a and b is %d\n" ,a*b);
      printf("division of a and b is %d\n" ,a/b);
       printf("remainderof a and b is %d\n" ,a%b);

       printf(".................................\n");

// relational operators
    printf("a==b is %d\n" ,a==b);
        printf("a!=b is %d\n" ,a!=b);
        printf("a>b is %d\n" ,a>b);
        printf("a<b is %d\n" ,a<b);
            printf("a>=b is %d\n" ,a>=b);
            printf("a<=b is %d\n" ,a<=b);

           printf(".................................\n");

           printf("a&&b is %d\n" ,a&&b);
            printf("a||b is %d\n" ,a||b);
             printf("!a is %d\n" ,!a);
              printf("!c is %d\n" ,!c);

              printf(".................................\n");
// bitwise operators
              printf("a&b is %d\n" ,a&b);// bitwise and
               printf("a|b is %d\n" ,a|b);// bitwise or
                printf("a^b is %d\n" ,a^b);// bitwise exclusive or
                 printf("~c is %d\n" ,~c);//    bitwise complement
                 printf("a<<b is %d\n" ,a<<b);//    left shift
                  printf("a>>b is %d\n" ,a>>b);//    right shift
                  
    //logical operators 
                 printf("a&&b is %d\n" ,a&&b);  
                    printf("a||b is %d\n" ,a||b);  
                     printf("!a is %d\n" ,!a);  
                        printf("!c is %d\n" ,!c);    
                        printf(".................................\n");        
                  
   
   // assignment operators
     printf("a+=b is %d\n" ,a+=b);
      printf("a-=b is %d\n" ,a-=b); 
         printf("a*=b is %d\n" ,a*=b);//
            printf("a/=b is %d\n" ,a/=b);
         
   
   
                        return 0;


}