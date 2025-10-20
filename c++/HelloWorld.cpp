using namespace std;  //可有可无，无的话必须 std::cout ，有的话可以 cout

#include <iostream>  //std必须

//1  g++ HelloWorld.cpp -std=c++11 -o HelloWorld.out  //生成二进制文件HelloWorld.out 
//2  ./HelloWorld.out 
int main() {
    std::cout << "Hello World ! --by C PLUS PLUS" << std::endl;
}