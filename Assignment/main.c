#include <stdio.h>
#include <math.h>
//This is commented well for my sanity and yours because it's my first C program NOT running on a microcontroller.
int main()
{
	int tempnum,num1,num2;
	char operation;
    printf("Enter two ints and a char (+-*/%%<>&|^~)\n");
    scanf("%d", &num1);//read the first number
    scanf("%d", &num2);//read the second number
    getchar();//reads the previous enter and throws it away. just a bug.
    operation = getchar();//reads the operation that will be performed by math
    printf("result is %d\n",math(num1, num2, operation));
    return 0;
}
