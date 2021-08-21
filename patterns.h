/**
 * @file patterns.h
 * @author Vikrant A. P. (vikrant_ap@hotmail.com)
 * @brief 
 * A program for creating different patterns of pixels to generate strokes
 * in a writing functionality using matrices
 * @version 0.1.0
 * @date 2021-08-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */

unsigned char roundPx3 [][3] = {
	{0, 1, 0},	// 1
	{1, 1, 1},	// 3
	{0, 1, 0}	// 1
};

unsigned char roundPx5 [][5] = {
	{0, 1, 1, 1, 0},	// 3
	{1, 1, 1, 1, 1},	// 5
	{1, 1, 1, 1, 1},	// 5
	{1, 1, 1, 1, 1},	// 5
	{0, 1, 1, 1, 0}		// 3
};

unsigned char roundPx7 [][7] = {
	{0, 0, 1, 1, 1, 0, 0},	// 3
	{0, 1, 1, 1, 1, 1, 0},	// 5
	{1, 1, 1, 1, 1, 1, 1},	// 7
	{1, 1, 1, 1, 1, 1, 1},	// 7
	{1, 1, 1, 1, 1, 1, 1},	// 7
	{0, 1, 1, 1, 1, 1, 0},	// 5
	{0, 0, 1, 1, 1, 0, 0}	// 3
};

unsigned char roundPx9 [][9] = {
	{0, 0, 0, 1, 1, 1, 0, 0, 0},	// 3
	{0, 1, 1, 1, 1, 1, 1, 1, 0},	// 7
	{0, 1, 1, 1, 1, 1, 1, 1, 0},	// 7
	{1, 1, 1, 1, 1, 1, 1, 1, 1},	// 9
	{1, 1, 1, 1, 1, 1, 1, 1, 1},	// 9
	{1, 1, 1, 1, 1, 1, 1, 1, 1},	// 9
	{0, 1, 1, 1, 1, 1, 1, 1, 0},	// 7
	{0, 1, 1, 1, 1, 1, 1, 1, 0},	// 7
	{0, 0, 0, 1, 1, 1, 0, 0, 0}		// 3
};

unsigned char roundPx11 [][11] = {
	{0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0},	// 5
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 7
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 9
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 11
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 11
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 11
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 11
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 11
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 9
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 7
	{0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0}	// 5
};

unsigned char roundPx13 [][13] = {
	{0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0},	// 5
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},	// 7
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 9
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 11
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 13
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 13
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 13
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 13
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 13
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 11
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 9
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},	// 7
	{0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0}		// 5
};

unsigned char roundPx15 [][15] = {
	{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 ,0},	// 5
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},	// 9
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 11
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 13
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 13
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 15
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 15
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 15
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 15
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},	// 15
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 13
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0},	// 13
	{0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0},	// 11
	{0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0},	// 9
	{0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0 ,0}	// 5
};
