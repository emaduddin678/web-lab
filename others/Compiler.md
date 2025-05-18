**✅ Experiment No:** 2  

**Experiment Name:** Write a simple lex specification to recognize the identifier.

**Source Code:**  

```lex
%{
#include <stdlib.h>
%}

DIGIT        [0-9]
CHARACTER    [a-zA-Z]
UNDERSCORE   [_]
IDENTIFIER   ({CHARACTER}|{UNDERSCORE})+({CHARACTER}|{DIGIT}|{UNDERSCORE})*
BLANK        [' ', '\t', '\n']
AL           (.)+

%%

{IDENTIFIER}    { printf("%s is an Identifier\n", yytext); }
{BLANK}         { printf(""); }
{AL}            { printf("%s is not an Identifier\n", yytext); }

%%

int main(void)
{
    yylex();
    return 0;
}

int yywrap(void)
{
    return 0;
}
```

**✅ Experiment No:** 3  

**Experiment Name:** Write a simple lex specification to recognize real numbers.

**Source Code:**  

```lex
%{
#include <stdlib.h>
%}

DIGIT   [0-9]
NUMBER  ([+-])?(({DIGIT})+)?(\.({DIGIT})+)?([Ee]([+-])?({DIGIT})+)?
BLANK   [' ', '\t', '\n']
AL      (.)+

%%

{NUMBER}    { printf("%s is a real number\n", yytext); }
{BLANK}     { printf(""); }
{AL}        { printf("%s is not a real Number\n", yytext); }

%%

int main(void)
{
    yylex();
    return 0;
}

int yywrap(void)
{
    return 0;
}
```
