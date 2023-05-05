/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <string.h>

int main(){

    char string[100];

    int i, j,comp;

    printf("frase ou palavra");

    fgets(string, 100, stdin);

    comp = strlen(string);

    for(i = 0; i < comp; i++){

        if(string[i] == 'r' && string[i+1] == ' '){

            continue;

        }

        else if(string[i] == 'r' && string[i+1] == 'r'){

            string[i] = 'l';

        for(j = i+1; j < comp; j++){

            string[j] = string[j+1];}

        }

                    

        else if(string[i] == 'r'){

                string[i] ='l';

            }

    }

    printf("r trocado por l eh  %s", string);

    

    

    return 0;

    

}