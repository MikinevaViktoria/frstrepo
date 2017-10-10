#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter value:");  // Entering values
    int n = 0;
    scanf("%d", &n);
    int i;
    for ( i = 0;i <= n; i++){
    int j;
    for ( j = 0; j <i; j++){
            printf("*");
         }
        printf("\n");
    }
{
    int q;
    for(q = 0; q < 21; q++){
        printf(" ");
    }
    printf("\n");
}

    int z;
    for (z = 0; z <= n; z++){
        int k;
        for (k = n; k > z; k--){
            printf("*");
        }
        printf("\n");

    }

    int w;
    for (w = 0; w <= n; w++){
        int m;
    for (m = n; m > w - 1; m--){
        printf(" ");
        }
        {
            int r;
            for (r = 1; r <= 2 * w - 1; r++){
                printf("*");
            }
        }
            printf("\n");

    }
{
    int a;
    for(a = 0; a < i - 1; a++){
        printf(" ");
    }
    int y;
    for(y = 1; y <= 1; y++){
        printf("*");
    }
}
    }




