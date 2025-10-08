#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
long long arr[1000];
long long total = 0, max = 0;
int i, count = 0, days[1000];
double percentage;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%lld", &arr[i]);
        
        total += arr[i];
        
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(i = 0; i < N; i++){
        if(arr [i] == max){
            days[count] = i + 1;
            count++;
        }
    }
    if(total == 0) percentage = 0.0;
    
    else percentage = (double)(max * count) / total * 100.0;
    
    printf("Max : %lld\n", max);
    printf("Count : %d\n", count);
    printf("days :");
    
    for(i = 0; i < count; i++){
        printf(" %d", days[i]);
    }
    printf("\n");
    printf("Percentage : %.3f%%\n", percentage);
    
    return 0;
}
