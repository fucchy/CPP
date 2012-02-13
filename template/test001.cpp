#include<iostream>
#include<string>

template <class Type> void swapargs(Type& a,Type& b){
    Type temp=a;
    a=b;
    b=temp;
}

int main(int argc,char* argv[]){
    int x=1;
    int y=2;

    std::cout<<"x="<<x<<", y="<<y<<std::endl;
    swapargs(x,y);
    std::cout<<"x="<<x<<", y="<<y<<std::endl;

    std::string str1="str1";
    std::string str2="str2";

    std::cout<<"str1="<<str1<<", str2="<<str2<<std::endl;
    swapargs(str1,str2);
    std::cout<<"str1="<<str1<<", str2="<<str2<<std::endl;

    return 0;
}

