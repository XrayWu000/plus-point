//C_MM28
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6933

#include <stdio.h>

int absnum(int x){
    if(x<0)
        x*=-1;
    return x;
}

int main(){
    int a,i;
   
	while(scanf("%d",&a)!=EOF){
        for(i=1; i<=a; i++){
            if(i%35==0){
                if(i==35)
                    printf("%d",i);
                else
                    printf(" %d",i);
            }
        }
    printf("\n");
    }
}