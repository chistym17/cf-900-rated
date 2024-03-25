// C Program to illustrate the strcat function 
#include <stdio.h> 

int main() 
{   int n;
    scanf("%d",&n);
	int first=0;
    int second=1;

printf("%d",first);
printf("%d",second);

for(int i=2;i<=n;i++)
{
int next=first+second;
printf("%d",next);

first=second;
second=next;

}

   



	return 0; 
}
