#include<stdio.h>
#include<stdlib.h>
#include<assert.h> /*Contains the assert macro, used to assist with detecting logical errors and other types of bug in debugging versions of a program */

#include<string.h> /*Defines string handling functions. */
#include<ctype.h>

int main()
{
    

char ch, buffer[15], operators[] = "+-*/%={}[]()><";
    
FILE *fp;

  
 
int i,j=0;

 
fp = fopen("text1.txt","r");
 
while((ch = fgetc(fp)) != EOF)
{
           
for(i = 0; i < 14; ++i){
               
if(ch == operators[i])
                   
printf("%c is operator\n", ch);
           
}
           
if(isdigit(ch))
           	
{

               
printf("%c is number\n", ch);
         }
           
if(isalpha(ch)){

               
buffer[j++] = ch;
         
}
           
else if((ch == ' ' || ch == '\n') && (j != 0)){
                   
buffer[j] = '\0';
                   
j = 0;
                   
printf("%s is indentifier\n", buffer);
         
}

   
}

   
fclose(fp);

   
return 0;
}
