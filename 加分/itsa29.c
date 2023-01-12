//C_MM29
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6935

#include <stdio.h>

int haveFactor(int num){
    int i;

    for (i = 2; i < num; i++)
        if(num % i == 0)
            return 1;
    return 0;
}

int main() {
    long long a, i, flag;

    while(scanf("%lld", &a)!=EOF){
        flag = 0;
        for (i = a - 1; i > 0; i--)
            if(!haveFactor(i)){
                flag = i;
                break;
            }
        if(flag!=0)
            printf("%lld\n", flag);
    }
}