/*Jack's task is to implement a program that calculates and prints the sum of the series: 11 + 22 + 33 + 44 + ... + N terms. Where N is entered by the user.



Help Jack create the program using the loop.

Input format :
The input consists of an integer N, representing the number of terms the sum is to be calculated.

Output format :
The output prints "Sum of the series: " followed by an integer representing the total sum of N terms.*/

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i = 1;

    scanf("%d", &n);

    while (i <= n) {
        sum += 11 * i; 
        i++; 
    }

    printf("Sum of the series: %d", sum);

    return 0;
}
