//
//  main.c
//  structures_C
//
//  Created by Jaron Treyer on 20.12.22.
//

#include <stdio.h>

typedef struct Date {
    int day, month, year;
} date;

int main(int argc, const char * argv[]) {
    
    date d = {28, 07, 1999};
    date * D = &d;
    
    printf("%d\n", d.day);
    printf("%d\n", D -> month);
    printf("%d\n", (*D).year);


    return 0;
}
