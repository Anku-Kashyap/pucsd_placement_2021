#include <stdio.h>
#include <stdlib.h>

float cal(int h, int m)
{
    if (m == 60)
    {
        m = 0;
        h += 1;
        if (h > 12)
            h = h - 12;
    }

    int angle_by_h = 0.5 * (h*60 + m);
    int angle_by_m = 6*m;
    int a = abs(angle_by_h - angle_by_m);
    if (360-a<a){
        return 360-a;

    }
    else{
        return a;
    }
}

float min_and_sec(int m, int s){

    int angle_by_m,angle_by_s;
    angle_by_m = 6*m + (s/10); //mathematical formula 
    angle_by_s = 6*s;

    int a = abs(angle_by_s-angle_by_m);
    return a;

}

int main(int argc, char *argv[])
{   
    float res;
    int hour, minute,second;
    hour = atoi(argv[1]);
    minute = atoi(argv[2]);
    second = atoi(argv[3]);
    res = min_and_sec( minute,second);
    //res = cal(hour,minute)
    printf("%.2f",res);
    return 0;
}