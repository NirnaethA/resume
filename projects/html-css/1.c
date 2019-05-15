#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main(){
    int a[10]{0};
    for (int i = 0; i < 10; i++){
        a[i] = (int)(rand() * 90 + 10);
    }
    int i = 0, j = 0;
    while (j < 10){
        if (a[j] > a[j + 1]){
            swap(&a[j], &a[j+1]);
            j++;
            i++;
        }else{
            i++;
        }
    }
    for (int i = 0; i < 10; ++i){
        printf("%d\n", a[i]);
    }
    return 0;
}