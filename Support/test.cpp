#include<cstdlib>
#include<stdio.h>
#include<unistd.h>

int main(){

    while(1){
        //system("clear && ls -ll ex/outRef.txt ex/out.txt ex/out2.txt ");
        system("clear && ls -ll ex/*Out.txt ex/*Out2.txt ex/*In.txt ex/*In2.txt ex/*Ref.txt ex/out.txt ex/out2.txt");
        sleep(1);
    }
    return 0;
}
