#include <stdio.h>
#include <stdlib.h>

//calculating the fibonacci
int fibonacci(int a)
{
    if (a == 0)
    {
        return 0;
    }

    else if (a == 1)
    {
        return 1;
    }

    else
    {

        int first, sec,c;
        first = 0;
        sec = 1;
        for (int i = 2; i <= a; i++)
        {
            c = first + sec;
            first = sec;
            sec = c;
        }
        return sec;
    }
}

// calculating the nth-even fibonacci
int even(int a){
    int count;
    int first, sec,c;
    first = 0;
    sec = 1;
    if (a==0){
        return 0;
    }
    else{
        while (count!=a)
        {
            c = first + sec;
            first = sec;
            sec = c;
            if (c%2==0){
                count++;
            }
        }
        return sec;
        
    }

    

}

int main(int argc, char *argv[])
{
    int n;
    long fib;
    n = atoi(argv[1]);
    fib = even(n); // for even
    //fib = fibonacci(n) for fibonacci
    printf("%d",fib);
    return 0;
}