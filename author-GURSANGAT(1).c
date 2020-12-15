//Q2-CALC THE OUTPUT AND EXPLAIN


# include <stdio.h>
int main()
{
   int i = 0;
   for (i=0; i<20; i++)
   {
     switch(i)
     {
       case 0:
         i += 5;
       case 1:
         i += 2;
       case 5:
         i += 5;
       default:
         i += 4;
         break;
     }
     printf("%d  ", i);
   }
   return 0;
}

     
//      HINTS/OPTIONS
//A)5 10 15 20
//B)7 12 17 22
//C)16 21
//D)Compiler Error
