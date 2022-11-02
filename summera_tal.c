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
    int num, top_num, total = 0;
    char text[15];
    
    /**
     * Assuming a numeric or character format type:
     * 
     * Reads data from standard input until hitting a whitespace character
     * (whitespace, tab, line break, page break, etc), and then tries to
     * convert it to the specified type.
     * 
     * Parsing error will produce a garbage result. Welcome to C.
     * 
     * see: https://www.dummies.com/programming/c/basics-of-the-scanf-function-in-c-programming/
     */
    scanf("%d", &num);                // parse input as integer
    int i, k;
    //numbers = malloc(num * sizeof(int));
    int numbers[num];
    for (i=0; i<num; i++){
        scanf("%d", &numbers[i]);
    }

    if(num % 2 != 0){
        top_num = (num + 1)/2;
    }else {
        top_num = num/2;
    }
    
    for (i = 0; i<top_num; i++){
        int index = 0;
        int biggest = 0;
        for (k = 0; k<num; k++){
            int number = numbers[k];
            if(biggest < number){
                biggest = number;
                index = k;
                
            }
        
        }
        //printf("biggest: %d", biggest);
        numbers[index] = 0;
        total += biggest;
    }

    printf("%d", total);
    


    // Equal to `scanf("%d %f", &x, &y);`.

    // Reads as many characters as the string can hold. And yes, character arrays are the strings of C.
    

    /**
     * Print to standard output. Don't forget to add a line break when needed.
     */
    //printf("%d\n", num);              // Kattis does read this
}