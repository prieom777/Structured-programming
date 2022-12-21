#include <stdio.h>

int main (){

    int m;

    printf ("please input an integer number= ");
    scanf ("%f", &m);

    if (m>0){
        printf ("the value of %d is 1", m);
    }else if (m<0){
        printf ("the value of %d is -1", m);
    }else{
        printf ("the value of %d is 0", m);
    }

    return 0;
}
