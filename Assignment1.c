#include<stdio.h>
#include<string.h>
#include <stdbool.h>


struct items{
        bool moon;
        bool journey : 8;
        bool glove : 16;
        bool representative : 16;
        unsigned int  money : 64;
        unsigned int plant : 8;
        bool trouble : 32;
        int boats : 32;
        float start : 64;
        float surprise : 32;
        int rain : 64;
        float jelly : 64;
        bool structure : 8;
        char church[11];
        int jail : 16;
        char egg : 8
};

void  main (){
struct items stuff = {
0,0,0,0,1819,61,1,26,0.000810,0.000000,-1845,0.000294,1,"yard",1216,"p"
};

printf("%u %u %u %u %llu %u %u %d %d %d %lld %f %u %s %u %c\n",
           stuff.moon, stuff.journey, stuff.glove, stuff.representative,
           stuff.money, stuff.plant, stuff.trouble, stuff.boats, stuff.start,
           stuff.surprise, stuff.rain, stuff.jelly, stuff.structure, stuff.church,
           stuff.jail, stuff.egg);
};
