/***
 * Template to a Kattis solution.
 * See: https://open.kattis.com/help/c
 * Author: Viola Söderlund <violaso@kth.se>
 */

#include <stdio.h>                  // standard input/output library
#include <stdlib.h>

/// Kattis calls main function to run your solution
int main()
{

    long long val_one, val_two, k;
    while (scanf("%lld %lld", &val_one, &val_two) != EOF){
        if(val_one > val_two){k = 1;}else{k = -1;}
        printf("%lld\n", k*(val_one - val_two));
        
    }
    return 0;

    
    


    // Equal to `scanf("%d %f", &x, &y);`.

    // Reads as many characters as the string can hold. And yes, character arrays are the strings of C.
    

    /**
     * Print to standard output. Don't forget to add a line break when needed.
     */
    //printf("%d\n", num);              // Kattis does read this
}