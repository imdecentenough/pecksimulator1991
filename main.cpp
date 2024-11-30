#include <iostream>

int f(int x){
    x = x * 2;
    x = x + 11;
    return x;
}

int g(int y, int z){
    int a;
    z = z * 2;
    a = z + y;
    a = a - 5;
    return a;
}

int h(int x, int y, int z){
    int a;
    a = y + z;
    a = a - x;
    return abs(a);
}

int main(){
    int x;
    int y;
    int z;
    std::string exit;
    std::cout << " Enter value for X: ";
    std::cin >> x;
    std::cout << "\n Enter value for Y: ";
    std::cin >> y;
    std::cout << "\n Enter value for Z: ";
    std::cin >> z;
    std::cout << "\n Code is: "<< f(x) << " " << g(y, z) << " " << h(x, y, z) << std::endl;
    std::cout << "Press any key to exit.";
    std::cin >> exit;
    return 0;
}