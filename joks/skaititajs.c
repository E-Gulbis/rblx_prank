#include <stdio.h>

int main(){
    FILE *yep;
    char buff[4];
    yep = fopen("C:\\Users\\SKOLENS\\Documents\\Programmesana\\Ernests Gulbis 10i\\joks\\counter.txt", "r");
    if(yep == NULL){
        printf("uh oh.");
    }
    if (fscanf(yep, "%3s", buff) != 1) {
        fprintf(stderr, "Error reading from file\n");
        fclose(yep);
        return 1;
    }
    int count = atoi(buff);
    printf("Number read: %d\n", count);
    fclose(yep);
    count++;
    yep = fopen("counter.txt", "w");
    fprintf(yep, "%d", count);
    fclose(yep);
}