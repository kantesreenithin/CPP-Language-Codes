//https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char ch;
    float d;
    double e;
    scanf("%d %ld %c %f %lf ",&a ,&b ,&ch, &d, &e);
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",ch);
    printf("%0.3f\n",d);
    printf("%0.9lf",e);
   
    // Complete the code.
    return 0;
}

