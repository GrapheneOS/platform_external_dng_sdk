/*
 * Copyright (C) 2026 The Android Open Source Project
 */

#include <stdexcept>

#define INTERFACE extern "C" __attribute__((visibility("hidden")))

INTERFACE void __ubsan_handle_add_overflow() {
    throw std::runtime_error("ubsan: add-overflow");
}

INTERFACE void __ubsan_handle_sub_overflow() {
    throw std::runtime_error("ubsan: sub-overflow");
}

INTERFACE void __ubsan_handle_mul_overflow() {
    throw std::runtime_error("ubsan: mul-overflow");
}

INTERFACE void __ubsan_handle_negate_overflow() {
    throw std::runtime_error("ubsan: negate-overflow");
}

INTERFACE void __ubsan_handle_divrem_overflow() {
    throw std::runtime_error("ubsan: divrem-overflow");
}
