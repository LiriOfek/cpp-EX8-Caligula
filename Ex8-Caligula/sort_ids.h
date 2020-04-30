/********************************************************\
File Name: sort_ids.h
Author: Liri (28/4/2020)
Purpose: This header file contain declaration of functions that sort
			vector of arrays in ascending order
\********************************************************/

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <array>

const int ID_LENGTH = 8;

using id_t = std::array<char, ID_LENGTH>;