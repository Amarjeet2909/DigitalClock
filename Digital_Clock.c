#include<stdio.h>
#include<windows.h>

int main(){
    int h,m,s;
    /* Adding a delay of 1000 millisconds and I shall use this
    in the sleep function */
    int d=1; 
    printf("\nSet Time:: \n");
    scanf("%d %d %d",&h,&m,&s);

    if(h>12 || m>60 || s>60){
        printf("\nInvalid input!!\n");
        exit(0);
    }
    while(1)//this is an infinite loop anyting inside it will repeat itself infinite times
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("Clock:: \n");
        printf("\n %02d:%02d:%02d",h,m,s);//this writes our time in this 00:00:00 format

        sleep(d);//this function sleep slows down or in other words it will control the speed of the loop the infinite while loop
        system("cls");//this clears the console screen
    }
}