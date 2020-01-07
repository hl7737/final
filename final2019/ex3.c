#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    double a[200];
    int k=0,j=0;
    for(k=1;k<argc;k++,j++){
        a[j]=atof(argv[k]);
    }
    int m;
    double min=a[1];
    for(m=0;m<argc-1;m++)
{
    if(a[m]<min){
        min=a[m];
    }
}
printf("The min number is：");
printf("%1.1f\n",min);
}  