#include<iostream>

int main(int argc,char* argv[]){
    int a=1;
    int* p=&a; // ポインタ宣言
    
    std::cout<<"変数aの値:"<<a<<std::endl;
    std::cout<<"変数aのアドレス:"<<&a<<std::endl;
    std::cout<<"pの値:"<<*p<<std::endl;
    std::cout<<"変数pのアドレス:"<<&p<<std::endl;
    return 0;
}

