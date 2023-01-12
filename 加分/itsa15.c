//C_MM15
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6897

#include <stdio.h>

int main(){
    double a,b;
   
	while(scanf("%lf %lf",&a,&b)!=EOF){
    if(a>=0 && a<=100 && b>=0 && b<=100)
        printf("inside\n");
    else
        printf("outside\n");
    }
    return 0;
}