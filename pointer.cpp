#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void update(int *a, int *b){
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    int *pa = &a, *pb = &b;
    
    //scanf("%d %d", &a, &b);
    cin>>a>>b;
    update(pa, pb);
    // printf("%d\n%d", a, b);
    cout<<a<<endl;
    cout<<b;

       
    return 0;
}
