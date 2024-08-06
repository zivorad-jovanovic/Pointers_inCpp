#include <iostream>

void print_hello(char* name){
    std::cout << "Hello " << name << std::endl;
}

int pointers_diff(int* first, int* second){  //only when pointers are used to point to array elements
    return first - second;
}

int sizeof_ptr(int* ptr){
    return sizeof(ptr);
}


int main(){

int* ptr1 = {};  //this pointer is initialized to null pointer, doesn't point at anything (int* ptr1 = {nullptr}) -> this is equal
double* ptr2 = {};  //pointer to double, can store only double variable address -> this pointer is not pointing at anything
int* point1, point2;  //in this case, point1 is pointer to integer but point2 is integer type, do this in separate lines !!!
float* point4 = nullptr;
int value = 23, value2 = 30;
double value3 = 32.65; 
char cr = 'A';
char* pointch = &cr;
const char* message = {"hello"};  //initializing pointer to char to string literal !! in this case, we shouldn't modify this string
int array[] = {1,2,3,4,5,6};
int* p1 = array;
int* p2 = array + 4;
int result = pointers_diff(p2, p1);
std::cout << "POINTERS DIFFERENCEE: " << result << std:: endl;
//message[1] = 'r';    //this is compiler error
//if we want to change string, we need to define it as array as shown below
//*message = 'e';  compiler error

//conclusion: if we want to not allow modification on our string, use const char*

char message1[] = {"hello"};
char name[] = {"John"};
print_hello(name);
message1[1] = 'p';    //this is ok

//each pointer is same size, doesn't matter which variable type is pointing on

std::cout << "Size of int* pointer " << sizeof(int*) << " bytes" << std::endl;
std::cout << "Size of double* pointer " << sizeof(double*) << " bytes" << std::endl;

ptr1 = &value;  //ptr1 contains value adress

std::cout << "Value : " << value << std::endl;
std::cout << "Value address: " << ptr1 << std::endl;

ptr1 = &value2;   //now, ptr1 is initialized to value2 address

std::cout << "Value2 : " << value2 << std::endl;
std::cout << "Value2 address: " << ptr1 << std::endl;

ptr2 = &value3;   //this is OK
//ptr1 = &value3;   this is not ok because ptr1 is pointer to int and value3 is double !!

//dereferencing a pointer: reading from address stored in pointer
//don't dereference uninitialized pointers
//don't derefernce null pointers!!

std::cout << "Value3 = " << *ptr2 << std::endl;
//std::cout << "Dereferencing uninitialized pointer : " << *point1 << std::endl;

std::cout << "Reading character through pointer: " << *pointch << std::endl;

std::cout << "Message: " << message << std::endl;
std::cout << "First character in string message: " << *message << std::endl;

std::cout << "Message1 is now: " << message1 << std::endl;


return 0;

}