//C_MM01
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855

#include <stdio.h>

int main(){
    double a,b,c;
    
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Trapezoid area:%.1lf\n",(a+b)*c/2);
    return 0;
}