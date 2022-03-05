#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int n,res=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        res+=x;
    }
    printf("%d",res);
    return 0;
}