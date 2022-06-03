package main

import (
	"fmt"
	"GO/hello"
)

func main() {
	a := [5]int {1,2,3,4,5}
	// fmt.Println(a)
	var p *int = &a[0] 
	fmt.Println(a)
	fmt.Println("数组a的地址为：", p)
	fmt.Println("________")
	hello.Hellotest()
	fmt.Println("*********")
	hello.Hellotest_1()

	b := a 
	fmt.Println("b的值为：",b)
	b[0] = 2
	fmt.Println("新的值b值为：",b)
	fmt.Println("新的值a值为：",a)
}