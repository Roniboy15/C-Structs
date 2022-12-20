//
//  main.c
//  structures_C
//
//  Created by Jaron Treyer on 20.12.22.
//

#include <stdio.h>
#include <math.h>
/*
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
*/

//targilim 20.12.23

struct points{
    float x;
    float y;
};
typedef struct points poin;

float merjak(poin p,poin t){
    float resp=sqrt(pow(p.x-t.x,2)+ (pow(p.y-t.y,2)));
    return resp;
}

int main()
{
    float resp;
    poin p,t;
    p.x=1.0;
    t.x=2.5;
    p.y=3.0;
    t.y=3.0;
    resp=merjak(p,t);
    printf("%f",resp);
    return 0;
}
//d=√((x2 – x1)² + (y2 – y1)²).
