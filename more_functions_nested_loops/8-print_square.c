#include "main.h"
/**
* print_square - prints the alphabet.
*@size: square size
*/

void printSquare(int size);


int main()
{

    printSquare(2);
    printSquare(10);

    return 0;
}


void printSquare(int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            putchar(35);
        }
        putchar('\n');
    }

}
