#include<iostream>
//#include<string> //stringヘッダーをincludeしなくてもエラーにならないのはなぜか？

int main(int argc,char* argv[]){
  std::string s("hello world!");
  std::cout<<s<<std::endl;
  return 0;
}

