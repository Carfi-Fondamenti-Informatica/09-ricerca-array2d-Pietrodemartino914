#include "lib.h"

int confronto (char a [10][20],char b [1][20]){
    for (int i = 0; i < 10; i++) {
        if (a[i][0]==b[0][0]){
            for (int j = 0; j < 20; j++) {
                if(a[i][j]!=b[0][j]) {
                    break;
                }
                if (j==19 and a[i][j]==b[0][j]){
                    return i;
                }
            }
        }
    }
}

