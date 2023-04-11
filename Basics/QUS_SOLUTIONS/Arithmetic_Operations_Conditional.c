#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y;
    char op;
    scanf("%d%d%c",&x,&y,&op);
    op = getchar();
    if(op == '+'){
        printf("%d",x+y);
    }
    else if(op == '-'){
        printf("%d",x-y);
    }
    else if(op == '%'){
        printf("%d",x%y);
    }
    else if(op == '/'){
        printf("%d",x/y);
    }
    else if(op == '*'){
        printf("%d",x*y);
    }
    else{
        printf("Enter valid arithmetic operator");
    }
    return 0;
}
