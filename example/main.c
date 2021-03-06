/**
*
* @Name : Example.c
* @Version : 1.0
* @Programmer : Max
* @Date : 2019-03-08, 2019-03-09
* @Released under : https://github.com/BaseMax/DecodeQueryStringC/blob/master/LICENSE
* @Repository : https://github.com/BaseMax/DecodeQueryStringC
*
**/
#include <stdio.h>
#include <stdlib.h>
#include "../source/decodequery.h"

int main() {
    char *value=malloc(sizeof(char)*107*2);
    strcpy(value,"%D8%B3%D9%84%D8%A7%D9%85");
    printf("Input: %s\n",value);
    decodeUrl(value,value);
    // decodeHtmlEntities(value,value);
    printf("Output: %s\n",value);

    printf("\n");

    strcpy(value,"HELLO%2C+%26%231587%3B%26%231604%3B%26%231575%3B%26%231605%3B+%2C+%26%231777%3B%26%231778%3B%26%231779%3B");
    printf("Input: %s\n",value);
    decodeUrl(value,value);
    decodeHtmlEntities(value,value);
    printf("Output: %s\n",value);

    return 0;
}
