package main

import (
	"fmt"
)

//方法一： go run HelloWorld.go  //直接执行
//方法二：
//   1  go build HelloWorld.go  //生成二进制文件HelloWorld
//   2  ./HelloWorld 
func main() {
	fmt.Println("Hello World ! --by GO")
}