	
//Point out the error in the program?


#include<stdio.h>

int main()
{
    char ch;
    int i;
    scanf("%c", &i);
    scanf("%d", &ch);
    printf("%c %d", ch, i);
    return 0;
}
  
  
  //OPTIONS
//[A].	Error: suspicious char to in conversion in scanf()
//[B].  Error: we may not get input for second scanf() statement   (CORRECT)	
//[C].	No error
//[D].	None of above
