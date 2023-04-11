#include<stdio.h>

void main () {
    int n; 
    printf ("Enter the no of rows : ");
    scanf ("%d", &n);

    for (int i=n; i>=1; i--) {
        int k = 1;
        for (int j=1; j<=i; j++) {
            printf ("%d", k);
            k++;
        }
        printf ("\n");
    }
}