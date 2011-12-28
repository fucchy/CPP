#include<string>
#include<iostream>

int main(int argc,char* argv[]){
    std::string str1;
    std::string str2("abcde");

    std::cout<<str1<<std::endl;
    std::cout<<str2<<std::endl;

    str1=str2;

    std::cout<<str1<<std::endl;
    return 0;
}

