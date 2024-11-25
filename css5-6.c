#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    do {
        printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");

        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Dung lai!!!\n");
            break;
        }

        printf("Nhap vao so thu nhat: ");
        scanf("%f", &num1);
        printf("Nhap vao so thu hai: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("Tong 2 so: %.2f\n", num1 + num2);
                break;
            case 2:
                printf("Hieu 2 so: %.2f\n", num1 - num2);
                break;
            case 3:
                printf("Tich 2 so: %.2f\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong 2 so: %.2f\n", num1 / num2);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
            default:
                printf("Thu lai ngay\n");
        }
    } while (choice != 5);

    return 0;
}

