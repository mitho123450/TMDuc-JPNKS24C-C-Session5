#include <stdio.h>

int main() {
    int num1 = 10;  
    int num2;

    printf("Nhap so bat ki: ", num1);

     while (num2 != num1){
        scanf("%d", &num2); 
        
        if (num2 != num1) {  
            printf("Sai roi ! Hay thu lai: ");
        }
    } 

    printf("Ban nhap dung roi !\n", num1);

    return 0;
}

