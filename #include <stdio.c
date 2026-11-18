#include <stdio.h>

int main(void) {
    int input;      
    double temp;    
    int result;    
    scanf("%d", &input);  
    temp = input * 1.08;  
    result = (int)temp;
    printf("%d\n", result);
    return 0;
}