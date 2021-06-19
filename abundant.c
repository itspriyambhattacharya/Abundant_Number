#include <stdio.h>
#include <stdlib.h>
int abundant (int n)
{
    int i = 2 , s = 0 ;
    for( ; i < n ; )
    {
        if (n % i == 0)
        {
            s = s + i ;
            i++ ;
        }
        else 
        {
            i++ ;
        }
        
    }
    return s ;
}
int main(int argc, char const *argv[])
{
    system("cls");
    printf("Enter a Number \n");
    int n ;
    scanf("%d" , &n);
    int s = abundant(n) + 1;
    if (n < s)
    {
        printf("%d is a Abundant Number \n" ,n);
    }
    else
    {
        printf("%d is not a Abundant Number \n" ,n);
    }
    return 0;
}
