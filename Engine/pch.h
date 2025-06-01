#pragma once

#ifdef _ENGINE_DYNAMIC_LIB_
#define API __declspec(dllexport)
#else
#define API __declspec(dllimport)
#endif

#include <vector>
#include <memory>