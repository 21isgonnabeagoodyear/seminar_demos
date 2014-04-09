#include <stdio.h>

#if defined(_WIN32)
typedef unsigned int ptrtype;
#elif defined(_WIN64)
typedef unsigned long ptrtype;
#endif



int main(){
        ptrtype x = 4;
        printf("%d\n", x);

}

