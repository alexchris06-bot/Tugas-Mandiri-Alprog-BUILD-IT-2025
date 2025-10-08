#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    
    if(scanf("%i", &N) != 1) return 0;
    
    int lebar = 2 * (N - 1) - 1;
    
    for(int i = 1; i <= N - 1; i++){
        int bintang = 2 * i - 1;
        int leading_spaces = (lebar - bintang) / 2;
        
    for(int s = 0; s < leading_spaces; s++) putchar(' ');
        
    for(int t = 0; t < bintang; t++) putchar('*');
        putchar('\n');
    }
    int batang = (lebar - 1) / 2;
    
    for(int s = 0; s < batang; s++) putchar(' ');
    putchar('*');
    putchar('\n');
        
    return 0;
}
