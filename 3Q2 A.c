   #include <stdio.h>

    int main() {
    int a ,b ,c ;
    printf("enter 3 integer : ");
    scanf(" %d %d %d", &a,&b,&c);
    if (a>=b && a>=c) {printf("greatest integer is %d/n",a);
	}
    else if(b>=c && b>=a){ printf("greatest integer is %d\n",b);
	}
    else {
	printf("greatest integer is %d\n",c);
}
	
	return 0;

    }
