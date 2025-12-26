@"
#include <iostream>

int main() {
    std::cout << "Hello from HW-GHA CI/CD Project!" << std::endl;
    std::cout << "Build successful on multiple platforms!" << std::endl;
    return 0;
}
"@ | Out-File -FilePath src\main.cpp -Encoding UTF8