// coding: utf-8
// #pragma once

#ifndef UTILS_CONST_HPP
#define UTILS_CONST_HPP

// Constants

typedef uint16_t DTY_UNT16;
typedef uint32_t DTY_UNT32;
typedef uint64_t DTY_UNT64;

typedef int16_t DTY_INT16;
typedef int16_t DTY_INT32;
typedef int32_t DTY_INT64;

typedef float DTY_FLT32;
typedef double DTY_FLT64;
typedef bool DTY_BOL;

const double CONST_ZERO = 1e-16;
const double CONST_DIFF = 1e-6;

// For robustness

template <typename T>
T sign(T num) {
    if (num > 0) {
        return 1.;
    } else if (num < 0) {
        return -1.;
    }
    return 0.;
}

template <typename T>
T check_zero(T num) {
    return (num == 0.) ? CONST_ZERO : num;
}

template <typename T>
bool check_equal(T tem_A, T tem_B, T diff = CONST_DIFF) {
    return (abs(tem_A - tem_B) <= diff) ? true : false;
}

// Print functions

#endif
