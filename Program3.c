//Count no. of tokens 

#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int con=0,var=0,op=0;

void check(char c)
{
    if(isalpha(c)) 
    var++;
    if(c==50||c==53||c== 60||c==74||c==85||c==96)
    op++;
}
/*ASCII values:
'/'=50
'*'=53
'+'=60
'-'=74
'='=85
'^'=96
*/
int main()
{
char c;
clrscr();
printf("\nEnter string");
scanf("%s",&str);
for(int i=0;i<13;i++)
{
 c=str[i];
 check(c);
}
for(i=0;i<13;i++)
{
 if(isdigit(str[i])&&isdigit(str[i+1]))
 {
 i=i+2;
 con++;
 }
 else if(isdigit(str[i]))
 con++;
}
printf("\n operators:%d\nvariables:%d\nconstants:%d,op,var,con");
printf("\ntotal tokens=%d",op+var+con);
return 0;
getch();
}
}
