#ifndef TEST_H
#define TEST_H

#include <iostream>

inline void display_test_name(const std::string& test_name) {
    std::cout << std::endl;
    std::cout << "============== " << test_name << " ============" << std::endl;
}

template<typename ValueType>
bool test_value(ValueType expected, ValueType value, bool debug = false) {
    if(debug) {
        std::cout << "Expected : " << expected << " | Got : " << value << std::endl;
    }
    return expected == value;
}

template<typename Iterator>
bool test_iterator(Iterator& expected, Iterator& it, bool debug = false) {
    if(debug) {
        std::cout << "Expected : [";
        for(const auto& el : expected) {
            std::cout << el << ',';
        }
        std::cout << "] | Expected : [";
        for(const auto& el : it) {
            std::cout << el << ',';
        }
        std::cout << "]" << std::endl;;
    }

    // Don't even bother to check if they aren't the same size
    // Also acts as a clause guard for the next loop
    if(expected.size() != it.size()) {
        return false;
    }

    for(int i = 0; i < expected.size(); i++) {
        if(expected[i] != it[i]) {
            return false;
        }
    }

    return true;
}

#endif //TEST_H
