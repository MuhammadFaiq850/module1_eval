#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int Q, M, n;      // declaring Dividen and Divisor
    int A = 0;
    char str[1000];
    int len;         // length of A after A-M step
    int first;      // first digit of A after A-M
    int msb;

    printf("Enter the Dividend(Q) and  Divisor(M)");
    scanf("%d %d ", &Q, &M);    // Taking input from user

    n = sizeof(Q) * 8;  // Calculating number of bits in Dividend

    A = A << 1;    // left shifting A
    Q = Q << 1;    // left shifting Q

    A = A-M;     

    sprintf(str, "%d", A);  // Type Casting A into string to calculate its length

    len = strlen(str);      // using strlen to calculate length 
    len = len-1;

    len = round(pow(10, len));  

    first = (int)(A/len);

    if (first <= 7){
        msb = 0;
    }
    else {
        msb = 1; 
    }


}