#include <stdio.h>
#include <stdlib.h>
#include "item.h"

void sort(Item *a, int lo, int hi){
    for(int i = lo; i <= hi; i++){
        for(int j = lo; j < hi - (i - lo); j++){
            compexch(a[j], a[j+1]);
        }
    }
}