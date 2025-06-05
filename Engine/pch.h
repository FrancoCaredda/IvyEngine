#pragma once

#ifdef _ENGINE_DYNAMIC_LIB_
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

#define DEFINE_BITWISE_BINARY_OPERATOR(Operator, Type) constexpr uint64_t operator##Operator(Type type1, Type type2)\
	{\
		return static_cast<uint64_t>(type1) Operator static_cast<uint64_t>(type2);\
	}

#include <vector>
#include <memory>
#include <chrono>
#include <string>