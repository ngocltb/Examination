#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, phantutieptheo;
    printf("Nhap so dieu kien cua chuoi: ");
    scanf("%d", &n);
    printf("Chuoi Fibonacci: ");
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", t1);
        phantutieptheo = t1 + t2;
        t1 = t2;
        t2 = phantutieptheo;
        if ( t1 >= 0 && t1 <= 100 && t2 >= 0 && t2 <= 100 ) {
        printf("%d, ", t1,t2);}
        else {
        	break;
		}
    
    }
    return 0;
}
