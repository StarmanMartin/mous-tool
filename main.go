package main


import (
	"fmt"
	"time"
	)


/*
#include <stdio.h>
extern void ACFunction(int a);
*/
import "C"

//export AGoFunction
func AGoFunction() {
    fmt.Println("AGoFunction()")
}

func main() {

	ticker := time.NewTicker(time.Millisecond * 30)
	for _ = range ticker.C {
			C.ACFunction(1)
    }
}