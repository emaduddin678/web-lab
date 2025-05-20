%{
#include<stdlib.h>
%}

DIGIT	[0-9]
NUMBER	([+-])?({DIGIT}+)?([.]({DIGIT})+)?([Ee]([+-])?({DIGIT})+)?
BLANK	[' ', '\t', '\n']
AL	(.)+

%%

{NUMBER}    {printf("%s is a Real Number\n",yytext);}
{BLANK}	{printf("");}
{AL}    {printf("%s is not a Real Number\n",yytext);}

%%


int main(void)
{
   
      
   yylex();
   return 0;
}

int yywrap(void){

	return 0;
}