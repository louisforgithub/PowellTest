#include <stdio.h>

char* sayHello(){
	return "hello world\0";
}

int main(){
	return printf("%s\n",sayHello());
}
