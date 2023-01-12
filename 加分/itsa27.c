//C_MM27
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit2.php?a=2939

#include <stdio.h>

int absnum(int x){
    if(x<0)
        x*=-1;
    return x;
}

int main(){
    int a,b;
   
	while(scanf("%d %d",&a,&b)!=EOF)
        printf("%d\n", ((a + b) * (absnum(a - b) + 1)) / 2);
}