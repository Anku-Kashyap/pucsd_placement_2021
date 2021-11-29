#include <stdio.h>
#include <stdlib.h>

int cal(int a){
    int l,h;
    int left_sum,right_sum;
    left_sum = 0;
    right_sum = a-1;
    l=1;
    h= a-2;
    while (l<h){
        if (left_sum<right_sum){
            left_sum+=l;
            l+=1;
        }
        else{
            right_sum+=h;
            h-=1;
        }
    
    }
    return l-1;


}


int main(int argc, char *argv[])
{   
    int a,res;
    a = atoi(argv[1]);
    res = cal(a);
    printf("%d",res);
    return 0;
}