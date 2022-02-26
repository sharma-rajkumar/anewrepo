  #include<stdio.h>
   int main()
     {  char day, round;
        for( day = 0 ; day <= 5 ; day++ )
           {     
                  for( round = 0 ; round <=day  ; round++)
                     {
                         printf("%c ", day + 65);
                     }
                    printf("\n")  ;
           }
           printf("\n\n");
           return   0;
     }   
     // some demo text 
     // above code is used to create a patten of letters
     
