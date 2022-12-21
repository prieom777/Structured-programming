#include <stdio.h>

    int main (){

    float num;

    printf ("please insert the number= ");
    scanf ("%f", &num);

    if (num<0){
        printf ("the number is negative");
    }else{
        printf ("the number is not negative");
    }
        return 0;
}
