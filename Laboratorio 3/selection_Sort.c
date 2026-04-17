#include <stdio.h>
#include <stdlib.h>
#include "item.h"

void sort(Item *a, int lo, int hi){
    for(int i = lo; i < hi; i++){
        int least = i;
        for(int j = i+1; j <= hi; j++){
            if(less(a[j], a[least])){
                least = j;
            }
        }
        exch(a[i], a[least]);
    }
}