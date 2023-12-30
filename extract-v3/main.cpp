#include <iostream>
#include <archive.h>
#include <string>
#include <stdio.h>

std::string bool_to_string(bool b) {
    return b ? "true" : "false";
}

bool extract_book() {
    return true;
}

int main(int argc, const char * argv[]) {
    auto res = extract_book();
    printf("%s\n", bool_to_string(res).c_str());
}
