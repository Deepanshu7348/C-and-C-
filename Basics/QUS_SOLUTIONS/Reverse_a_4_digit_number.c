#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int num,reverse = 0;
    scanf("%d",&num);
    while (num != 0)
    {
        reverse = reverse*10 +num % 10;
        num /= 10;
    }
    printf("%d",reverse);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}