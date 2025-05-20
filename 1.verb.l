%{
#include<stdlib.h>
%}

VERB	am|is|are|was|were
BLANK	[' ', '\t', '\n']
AL	(.)+

%%

{VERB}	{printf("%s is a Verb\n",yytext);}
{BLANK}	{printf("");}
{AL}    {printf("%s is not a Verb\n",yytext);}

%%


int main(void)
{
   
      
   yylex();
   return 0;
}

int yywrap(void){

	return 0;
}