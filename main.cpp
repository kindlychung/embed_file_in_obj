#include <iostream>
#include <sstream>

extern char _binary_data_txt_start;
extern char _binary_data_txt_end;

int main() {
    char* p = &_binary_data_txt_start;
    std::stringstream ss;
    while (p != &_binary_data_txt_end) {
        ss << *p++;
    }
    std::cout << ss.str() << '\n';
    return 0;
}
