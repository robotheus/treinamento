#include <stdio.h>

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(n % 2 == 0){
                    if(i == j) printf("1");
                    else if ((i + j) == n - 1) printf("2");
                    else printf("3");
                } else{
                    if ((i + j) == n - 1) printf("2");
                    else if(i == j) printf("1");
                    else printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}