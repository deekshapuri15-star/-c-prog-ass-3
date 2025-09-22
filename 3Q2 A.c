   #include <stdio.h>

    int main() {
    int a, b, c, greatest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = (a > b) ? 
    ((a > c) ? a : c) 
    : 
    ((b > c) ? b : c);

    printf("Greatest integer is %d\n", greatest);

    return 0;
}

	
	

    
