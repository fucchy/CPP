#include<iostream>
#include<time.h>

int main(int argc,char* argv[]){
    clock_t start,end;
    start=clock();
    std::cout<<"hello world!"<<std::endl;
    end=clock();
    std::cout<<"time:"<<end-start<<"ms"<<std::endl;
    return 0;
}

