//C_MM16
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6900

#include <stdio.h>

int main(){
    double a,b,c;
   
	while(scanf("%lf %lf",&a,&b)!=EOF){
		c=(a*a)+(b*b); 
		if(c<10000){
		    printf("inside\n");
		}
		else{
			printf("outside\n");
		}
        
    }
    return 0;
}