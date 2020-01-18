#pragma once

#include <AH/Math/MinMaxFix.hpp>
#include <AH/STL/type_traits>

AH_DIAGNOSTIC_EXTERNAL_HEADER()
#include <Arduino.h> // min max
AH_DIAGNOSTIC_POP()

AH_DIAGNOSTIC_WERROR() // Enable errors on warnings

#ifdef __AVR__
#pragma push_macro("PSTR")
#undef PSTR
#define PSTR(s) (s)
#endif

using FlashString_t = std::remove_reference<decltype(*F(""))>::type *;

#ifdef __AVR__
#pragma pop_macro("PSTR")
#endif

AH_DIAGNOSTIC_POP()
