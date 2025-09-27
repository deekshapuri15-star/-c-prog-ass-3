   
    #include <stdio.h>

int main() {
    int days;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    switch (days) {
        case 0:
            printf("No fine. Book returned on time.\n");
            break;

        case 1: case 2: case 3: case 4: case 5:
            printf("Fine = Rs. %.2f\n", days * 0.50);
            break;

        case 6: case 7: case 8: case 9: case 10:
            printf("Fine = Rs. %d\n", days * 1);
            break;

        default:
            if (days > 10 && days <= 30)
                printf("Fine = Rs. %d\n", days * 5);
            else if (days > 30)
                printf("Membership cancelled!\n");
            else
                printf("Invalid input!\n");
    }

    return 0;
}

	


