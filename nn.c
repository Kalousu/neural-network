#include <stdio.h>

int main(){
    FILE *pF = fopen("test.txt", "a");
    fprintf(pF, "\nkevkev");
    fclose(pF);
    printf("Hello World!");

    if(remove("test.txt") == 0){
        printf("Deleted successfully!");
    }else {
        printf("Not successful...");
    }
    return 0;
}