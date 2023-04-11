#include <stdio.h>
int main()
{
	float oprnd1,oprnd2;
  	char opr;
  	scanf("%f%c",&oprnd1,&opr);
  	scanf("%c%f",&opr,&oprnd2);
  	switch(opr){
      case '+':
        printf("%.2f",oprnd1 + oprnd2);
        break;
      case '-':
        printf("%.2f",oprnd1 - oprnd2);
        break;
      case '*':
        printf("%.2f",oprnd1 * oprnd2);
        break;
      case '/':
        printf("%.2f",oprnd1 / oprnd2);
        break;
    }
    return 0;
}