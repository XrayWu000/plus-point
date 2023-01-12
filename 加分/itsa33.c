//CM33
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6943

#include <stdio.h>

int is_perfect(long long num){
    long long i, sum = 0;
    for (i = 1; i < num; i++)
        if (num % i == 0)
            sum += i;
    if(sum == num)
        return 1;
    else
        return 0;
}

int main(){
    long long num, i;
    scanf("%lld", &num);
    for (i = 5; i < num; i++){
        if(is_perfect(i)){
            if(i == 6)
                printf("%lld", i);
            else
                printf(" %lld", i);
        }
    }
    printf("\n");
}