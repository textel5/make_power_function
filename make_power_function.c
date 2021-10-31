/*
    make_power_function multiply a number by itself for needed times
    Copyright (C) 2021  Sergey Tokarev
....
    This file is part of make_power_function.
    make_power_function is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    listint is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with listint.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "make_power_function.h"

#define MAKE_POWER_FUNCTION(TYPE) \
  TYPE TYPE ## _power(const TYPE num, const int pow) \
  { \
    TYPE result; \
    int i; \
    for (i = 0, result = num; i < pow; i++) { \
      result *= num; \
    } \
    return result; \
  }

MAKE_POWER_FUNCTION(int)