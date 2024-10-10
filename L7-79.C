//WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y
#include<stdio.h>
void swap (int *x, int *y); //function prototype using pointer x and pointer y as parameters
int main()
{
    int x,y;//declaration of variables
    
    printf("Enter the value of x and y, respectively: ");
    scanf("%d %d",&x ,&y);
    
    swap(&x,&y); //calling swap function
    
    printf("%d",x);
    printf("%d",y);

}
//function defintion for swap
void swap(int *x , int *y)
{
    int c = *x ;
    *x = *y;
    *y =c;

}
