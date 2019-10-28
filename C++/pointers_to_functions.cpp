#include <bits/stdc++.h>
using namespace std;
void someFunction(){
    printf("Hello World from C++\n");
}
void add(int a, int b, void (*callback)(int)){
    int result = a + b;
    callback(result);
}
void callback(int n){
    printf("Result: %d",n);
}
int main() {
    /*
     * functionPointer is a pointer to function someFunction();
     */
    void (*functionPointer)(void) = someFunction;
    functionPointer();
    add(5,9,callback);
    return 0;
}
