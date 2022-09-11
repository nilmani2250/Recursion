// Design a recursive function for printing the binary format of a input number.

#include<stdio.h>
void print(int);
void main()
{
int num;
printf("Enter the nummber...\n");
scanf("%d",&num);
printf((num);
printf("\n");
}
void print(int n)
{
static int pos=31;
if(pos>=0)
{
pritf("%d",n>>pos&1);
pos--;
print(n);
}
else
pos=31;
}



//Design a recursive function to print the given string character by character.

#include<stdio.h>
void print(const char*);
void main()
{
char s[]="ABCD";
printf(s);
printf("\n");
}
void print(const char *p)
{
if(*p)
{
printf("%c ".*p);
printf(p+1);
}
}
