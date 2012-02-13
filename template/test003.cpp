#include<iostream>

/*
 * 一般に、Type型の2乗値を求める関数は、以下のように表せます。
 *   Type square(Type x) { return x * x; }
 * Typeとしてどんな型を与えても、この関数がちゃんと動作すれば便利ですね。
 * それを実現するのが、生成性あるいは総称性(genericity)と呼ばれる考え方です。
 * なお、この考え方は、一般には"ジェネリクス"と呼ばれ、生成的な関数のことを"ジェネリックな関数"と呼びます。
 *
 * 本プログラムで定義されているsquareには、"template <class Type>"という前置きが付いています。
 * これから宣言するのが、通常の関数ではなく、
 * 関数テンプレート(function template)であってテンプレート仮引数Typeに『型』を受け取ることの指示です。
 * なお、Typeは引数名ですから、別の名前でも構いません。
 *
 * 解きながら学ぶC++入門編 2010年6月10日初版発行 304ページから305ページ 引用、改変
 *
 */

template <class Type> Type square(Type x){
  return x*x;
}

int main(int argc,char* argv[]){
  int a=3;
  double b=3.1;

  std::cout<<"aは整数"<<a<<"であり、その2乗は"<<square(a)<<std::endl;
  std::cout<<"bは実数"<<b<<"であり、その2乗は"<<square(b)<<std::endl;
  return 0;
}

