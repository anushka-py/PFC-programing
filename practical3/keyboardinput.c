#include <stdio.h>
int main(){    
    char firstword[20];     
    char secondword[20]; 
    int num;
 
    printf("Enter two words and an integer from keyboard: \n");
    scanf("%19s %19s %d", firstword, secondword, &num); 
    printf("%s %s \n%d \n", firstword, secondword, num);
    return 0;
}