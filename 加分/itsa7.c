//C_MM077
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6873

#include <stdio.h>
#include <math.h>

int main() {
    double a;

    while(scanf("%lf", &a)!=EOF){
        if(a<0)
            break;
        printf("%.1lf\n", pow(a,2));
    }
}