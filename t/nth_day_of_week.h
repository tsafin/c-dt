
const struct test {
    int y;
    int m;
    int d;
    int nth;
    int dow;
    int ey;
    int em;
    int ed;
} tests[] = {
    {2012,  6,  1, -20, 1, 2012,  1, 16},
    {2012,  6,  1, -19, 1, 2012,  1, 23},
    {2012,  6,  1, -18, 1, 2012,  1, 30},
    {2012,  6,  1, -17, 1, 2012,  2,  6},
    {2012,  6,  1, -16, 1, 2012,  2, 13},
    {2012,  6,  1, -15, 1, 2012,  2, 20},
    {2012,  6,  1, -14, 1, 2012,  2, 27},
    {2012,  6,  1, -13, 1, 2012,  3,  5},
    {2012,  6,  1, -12, 1, 2012,  3, 12},
    {2012,  6,  1, -11, 1, 2012,  3, 19},
    {2012,  6,  1, -10, 1, 2012,  3, 26},
    {2012,  6,  1,  -9, 1, 2012,  4,  2},
    {2012,  6,  1,  -8, 1, 2012,  4,  9},
    {2012,  6,  1,  -7, 1, 2012,  4, 16},
    {2012,  6,  1,  -6, 1, 2012,  4, 23},
    {2012,  6,  1,  -5, 1, 2012,  4, 30},
    {2012,  6,  1,  -4, 1, 2012,  5,  7},
    {2012,  6,  1,  -3, 1, 2012,  5, 14},
    {2012,  6,  1,  -2, 1, 2012,  5, 21},
    {2012,  6,  1,  -1, 1, 2012,  5, 28},
    {2012,  6,  1,   1, 1, 2012,  6,  4},
    {2012,  6,  1,   2, 1, 2012,  6, 11},
    {2012,  6,  1,   3, 1, 2012,  6, 18},
    {2012,  6,  1,   4, 1, 2012,  6, 25},
    {2012,  6,  1,   5, 1, 2012,  7,  2},
    {2012,  6,  1,   6, 1, 2012,  7,  9},
    {2012,  6,  1,   7, 1, 2012,  7, 16},
    {2012,  6,  1,   8, 1, 2012,  7, 23},
    {2012,  6,  1,   9, 1, 2012,  7, 30},
    {2012,  6,  1,  10, 1, 2012,  8,  6},
    {2012,  6,  1,  11, 1, 2012,  8, 13},
    {2012,  6,  1,  12, 1, 2012,  8, 20},
    {2012,  6,  1,  13, 1, 2012,  8, 27},
    {2012,  6,  1,  14, 1, 2012,  9,  3},
    {2012,  6,  1,  15, 1, 2012,  9, 10},
    {2012,  6,  1,  16, 1, 2012,  9, 17},
    {2012,  6,  1,  17, 1, 2012,  9, 24},
    {2012,  6,  1,  18, 1, 2012, 10,  1},
    {2012,  6,  1,  19, 1, 2012, 10,  8},
    {2012,  6,  1,  20, 1, 2012, 10, 15},
    {2012,  6,  1, -20, 2, 2012,  1, 17},
    {2012,  6,  1, -19, 2, 2012,  1, 24},
    {2012,  6,  1, -18, 2, 2012,  1, 31},
    {2012,  6,  1, -17, 2, 2012,  2,  7},
    {2012,  6,  1, -16, 2, 2012,  2, 14},
    {2012,  6,  1, -15, 2, 2012,  2, 21},
    {2012,  6,  1, -14, 2, 2012,  2, 28},
    {2012,  6,  1, -13, 2, 2012,  3,  6},
    {2012,  6,  1, -12, 2, 2012,  3, 13},
    {2012,  6,  1, -11, 2, 2012,  3, 20},
    {2012,  6,  1, -10, 2, 2012,  3, 27},
    {2012,  6,  1,  -9, 2, 2012,  4,  3},
    {2012,  6,  1,  -8, 2, 2012,  4, 10},
    {2012,  6,  1,  -7, 2, 2012,  4, 17},
    {2012,  6,  1,  -6, 2, 2012,  4, 24},
    {2012,  6,  1,  -5, 2, 2012,  5,  1},
    {2012,  6,  1,  -4, 2, 2012,  5,  8},
    {2012,  6,  1,  -3, 2, 2012,  5, 15},
    {2012,  6,  1,  -2, 2, 2012,  5, 22},
    {2012,  6,  1,  -1, 2, 2012,  5, 29},
    {2012,  6,  1,   1, 2, 2012,  6,  5},
    {2012,  6,  1,   2, 2, 2012,  6, 12},
    {2012,  6,  1,   3, 2, 2012,  6, 19},
    {2012,  6,  1,   4, 2, 2012,  6, 26},
    {2012,  6,  1,   5, 2, 2012,  7,  3},
    {2012,  6,  1,   6, 2, 2012,  7, 10},
    {2012,  6,  1,   7, 2, 2012,  7, 17},
    {2012,  6,  1,   8, 2, 2012,  7, 24},
    {2012,  6,  1,   9, 2, 2012,  7, 31},
    {2012,  6,  1,  10, 2, 2012,  8,  7},
    {2012,  6,  1,  11, 2, 2012,  8, 14},
    {2012,  6,  1,  12, 2, 2012,  8, 21},
    {2012,  6,  1,  13, 2, 2012,  8, 28},
    {2012,  6,  1,  14, 2, 2012,  9,  4},
    {2012,  6,  1,  15, 2, 2012,  9, 11},
    {2012,  6,  1,  16, 2, 2012,  9, 18},
    {2012,  6,  1,  17, 2, 2012,  9, 25},
    {2012,  6,  1,  18, 2, 2012, 10,  2},
    {2012,  6,  1,  19, 2, 2012, 10,  9},
    {2012,  6,  1,  20, 2, 2012, 10, 16},
    {2012,  6,  1, -20, 3, 2012,  1, 18},
    {2012,  6,  1, -19, 3, 2012,  1, 25},
    {2012,  6,  1, -18, 3, 2012,  2,  1},
    {2012,  6,  1, -17, 3, 2012,  2,  8},
    {2012,  6,  1, -16, 3, 2012,  2, 15},
    {2012,  6,  1, -15, 3, 2012,  2, 22},
    {2012,  6,  1, -14, 3, 2012,  2, 29},
    {2012,  6,  1, -13, 3, 2012,  3,  7},
    {2012,  6,  1, -12, 3, 2012,  3, 14},
    {2012,  6,  1, -11, 3, 2012,  3, 21},
    {2012,  6,  1, -10, 3, 2012,  3, 28},
    {2012,  6,  1,  -9, 3, 2012,  4,  4},
    {2012,  6,  1,  -8, 3, 2012,  4, 11},
    {2012,  6,  1,  -7, 3, 2012,  4, 18},
    {2012,  6,  1,  -6, 3, 2012,  4, 25},
    {2012,  6,  1,  -5, 3, 2012,  5,  2},
    {2012,  6,  1,  -4, 3, 2012,  5,  9},
    {2012,  6,  1,  -3, 3, 2012,  5, 16},
    {2012,  6,  1,  -2, 3, 2012,  5, 23},
    {2012,  6,  1,  -1, 3, 2012,  5, 30},
    {2012,  6,  1,   1, 3, 2012,  6,  6},
    {2012,  6,  1,   2, 3, 2012,  6, 13},
    {2012,  6,  1,   3, 3, 2012,  6, 20},
    {2012,  6,  1,   4, 3, 2012,  6, 27},
    {2012,  6,  1,   5, 3, 2012,  7,  4},
    {2012,  6,  1,   6, 3, 2012,  7, 11},
    {2012,  6,  1,   7, 3, 2012,  7, 18},
    {2012,  6,  1,   8, 3, 2012,  7, 25},
    {2012,  6,  1,   9, 3, 2012,  8,  1},
    {2012,  6,  1,  10, 3, 2012,  8,  8},
    {2012,  6,  1,  11, 3, 2012,  8, 15},
    {2012,  6,  1,  12, 3, 2012,  8, 22},
    {2012,  6,  1,  13, 3, 2012,  8, 29},
    {2012,  6,  1,  14, 3, 2012,  9,  5},
    {2012,  6,  1,  15, 3, 2012,  9, 12},
    {2012,  6,  1,  16, 3, 2012,  9, 19},
    {2012,  6,  1,  17, 3, 2012,  9, 26},
    {2012,  6,  1,  18, 3, 2012, 10,  3},
    {2012,  6,  1,  19, 3, 2012, 10, 10},
    {2012,  6,  1,  20, 3, 2012, 10, 17},
    {2012,  6,  1, -20, 4, 2012,  1, 19},
    {2012,  6,  1, -19, 4, 2012,  1, 26},
    {2012,  6,  1, -18, 4, 2012,  2,  2},
    {2012,  6,  1, -17, 4, 2012,  2,  9},
    {2012,  6,  1, -16, 4, 2012,  2, 16},
    {2012,  6,  1, -15, 4, 2012,  2, 23},
    {2012,  6,  1, -14, 4, 2012,  3,  1},
    {2012,  6,  1, -13, 4, 2012,  3,  8},
    {2012,  6,  1, -12, 4, 2012,  3, 15},
    {2012,  6,  1, -11, 4, 2012,  3, 22},
    {2012,  6,  1, -10, 4, 2012,  3, 29},
    {2012,  6,  1,  -9, 4, 2012,  4,  5},
    {2012,  6,  1,  -8, 4, 2012,  4, 12},
    {2012,  6,  1,  -7, 4, 2012,  4, 19},
    {2012,  6,  1,  -6, 4, 2012,  4, 26},
    {2012,  6,  1,  -5, 4, 2012,  5,  3},
    {2012,  6,  1,  -4, 4, 2012,  5, 10},
    {2012,  6,  1,  -3, 4, 2012,  5, 17},
    {2012,  6,  1,  -2, 4, 2012,  5, 24},
    {2012,  6,  1,  -1, 4, 2012,  5, 31},
    {2012,  6,  1,   1, 4, 2012,  6,  7},
    {2012,  6,  1,   2, 4, 2012,  6, 14},
    {2012,  6,  1,   3, 4, 2012,  6, 21},
    {2012,  6,  1,   4, 4, 2012,  6, 28},
    {2012,  6,  1,   5, 4, 2012,  7,  5},
    {2012,  6,  1,   6, 4, 2012,  7, 12},
    {2012,  6,  1,   7, 4, 2012,  7, 19},
    {2012,  6,  1,   8, 4, 2012,  7, 26},
    {2012,  6,  1,   9, 4, 2012,  8,  2},
    {2012,  6,  1,  10, 4, 2012,  8,  9},
    {2012,  6,  1,  11, 4, 2012,  8, 16},
    {2012,  6,  1,  12, 4, 2012,  8, 23},
    {2012,  6,  1,  13, 4, 2012,  8, 30},
    {2012,  6,  1,  14, 4, 2012,  9,  6},
    {2012,  6,  1,  15, 4, 2012,  9, 13},
    {2012,  6,  1,  16, 4, 2012,  9, 20},
    {2012,  6,  1,  17, 4, 2012,  9, 27},
    {2012,  6,  1,  18, 4, 2012, 10,  4},
    {2012,  6,  1,  19, 4, 2012, 10, 11},
    {2012,  6,  1,  20, 4, 2012, 10, 18},
    {2012,  6,  1, -20, 5, 2012,  1, 20},
    {2012,  6,  1, -19, 5, 2012,  1, 27},
    {2012,  6,  1, -18, 5, 2012,  2,  3},
    {2012,  6,  1, -17, 5, 2012,  2, 10},
    {2012,  6,  1, -16, 5, 2012,  2, 17},
    {2012,  6,  1, -15, 5, 2012,  2, 24},
    {2012,  6,  1, -14, 5, 2012,  3,  2},
    {2012,  6,  1, -13, 5, 2012,  3,  9},
    {2012,  6,  1, -12, 5, 2012,  3, 16},
    {2012,  6,  1, -11, 5, 2012,  3, 23},
    {2012,  6,  1, -10, 5, 2012,  3, 30},
    {2012,  6,  1,  -9, 5, 2012,  4,  6},
    {2012,  6,  1,  -8, 5, 2012,  4, 13},
    {2012,  6,  1,  -7, 5, 2012,  4, 20},
    {2012,  6,  1,  -6, 5, 2012,  4, 27},
    {2012,  6,  1,  -5, 5, 2012,  5,  4},
    {2012,  6,  1,  -4, 5, 2012,  5, 11},
    {2012,  6,  1,  -3, 5, 2012,  5, 18},
    {2012,  6,  1,  -2, 5, 2012,  5, 25},
    {2012,  6,  1,  -1, 5, 2012,  6,  1},
    {2012,  6,  1,   1, 5, 2012,  6,  1},
    {2012,  6,  1,   2, 5, 2012,  6,  8},
    {2012,  6,  1,   3, 5, 2012,  6, 15},
    {2012,  6,  1,   4, 5, 2012,  6, 22},
    {2012,  6,  1,   5, 5, 2012,  6, 29},
    {2012,  6,  1,   6, 5, 2012,  7,  6},
    {2012,  6,  1,   7, 5, 2012,  7, 13},
    {2012,  6,  1,   8, 5, 2012,  7, 20},
    {2012,  6,  1,   9, 5, 2012,  7, 27},
    {2012,  6,  1,  10, 5, 2012,  8,  3},
    {2012,  6,  1,  11, 5, 2012,  8, 10},
    {2012,  6,  1,  12, 5, 2012,  8, 17},
    {2012,  6,  1,  13, 5, 2012,  8, 24},
    {2012,  6,  1,  14, 5, 2012,  8, 31},
    {2012,  6,  1,  15, 5, 2012,  9,  7},
    {2012,  6,  1,  16, 5, 2012,  9, 14},
    {2012,  6,  1,  17, 5, 2012,  9, 21},
    {2012,  6,  1,  18, 5, 2012,  9, 28},
    {2012,  6,  1,  19, 5, 2012, 10,  5},
    {2012,  6,  1,  20, 5, 2012, 10, 12},
    {2012,  6,  1, -20, 6, 2012,  1, 14},
    {2012,  6,  1, -19, 6, 2012,  1, 21},
    {2012,  6,  1, -18, 6, 2012,  1, 28},
    {2012,  6,  1, -17, 6, 2012,  2,  4},
    {2012,  6,  1, -16, 6, 2012,  2, 11},
    {2012,  6,  1, -15, 6, 2012,  2, 18},
    {2012,  6,  1, -14, 6, 2012,  2, 25},
    {2012,  6,  1, -13, 6, 2012,  3,  3},
    {2012,  6,  1, -12, 6, 2012,  3, 10},
    {2012,  6,  1, -11, 6, 2012,  3, 17},
    {2012,  6,  1, -10, 6, 2012,  3, 24},
    {2012,  6,  1,  -9, 6, 2012,  3, 31},
    {2012,  6,  1,  -8, 6, 2012,  4,  7},
    {2012,  6,  1,  -7, 6, 2012,  4, 14},
    {2012,  6,  1,  -6, 6, 2012,  4, 21},
    {2012,  6,  1,  -5, 6, 2012,  4, 28},
    {2012,  6,  1,  -4, 6, 2012,  5,  5},
    {2012,  6,  1,  -3, 6, 2012,  5, 12},
    {2012,  6,  1,  -2, 6, 2012,  5, 19},
    {2012,  6,  1,  -1, 6, 2012,  5, 26},
    {2012,  6,  1,   1, 6, 2012,  6,  2},
    {2012,  6,  1,   2, 6, 2012,  6,  9},
    {2012,  6,  1,   3, 6, 2012,  6, 16},
    {2012,  6,  1,   4, 6, 2012,  6, 23},
    {2012,  6,  1,   5, 6, 2012,  6, 30},
    {2012,  6,  1,   6, 6, 2012,  7,  7},
    {2012,  6,  1,   7, 6, 2012,  7, 14},
    {2012,  6,  1,   8, 6, 2012,  7, 21},
    {2012,  6,  1,   9, 6, 2012,  7, 28},
    {2012,  6,  1,  10, 6, 2012,  8,  4},
    {2012,  6,  1,  11, 6, 2012,  8, 11},
    {2012,  6,  1,  12, 6, 2012,  8, 18},
    {2012,  6,  1,  13, 6, 2012,  8, 25},
    {2012,  6,  1,  14, 6, 2012,  9,  1},
    {2012,  6,  1,  15, 6, 2012,  9,  8},
    {2012,  6,  1,  16, 6, 2012,  9, 15},
    {2012,  6,  1,  17, 6, 2012,  9, 22},
    {2012,  6,  1,  18, 6, 2012,  9, 29},
    {2012,  6,  1,  19, 6, 2012, 10,  6},
    {2012,  6,  1,  20, 6, 2012, 10, 13},
    {2012,  6,  1, -20, 7, 2012,  1, 15},
    {2012,  6,  1, -19, 7, 2012,  1, 22},
    {2012,  6,  1, -18, 7, 2012,  1, 29},
    {2012,  6,  1, -17, 7, 2012,  2,  5},
    {2012,  6,  1, -16, 7, 2012,  2, 12},
    {2012,  6,  1, -15, 7, 2012,  2, 19},
    {2012,  6,  1, -14, 7, 2012,  2, 26},
    {2012,  6,  1, -13, 7, 2012,  3,  4},
    {2012,  6,  1, -12, 7, 2012,  3, 11},
    {2012,  6,  1, -11, 7, 2012,  3, 18},
    {2012,  6,  1, -10, 7, 2012,  3, 25},
    {2012,  6,  1,  -9, 7, 2012,  4,  1},
    {2012,  6,  1,  -8, 7, 2012,  4,  8},
    {2012,  6,  1,  -7, 7, 2012,  4, 15},
    {2012,  6,  1,  -6, 7, 2012,  4, 22},
    {2012,  6,  1,  -5, 7, 2012,  4, 29},
    {2012,  6,  1,  -4, 7, 2012,  5,  6},
    {2012,  6,  1,  -3, 7, 2012,  5, 13},
    {2012,  6,  1,  -2, 7, 2012,  5, 20},
    {2012,  6,  1,  -1, 7, 2012,  5, 27},
    {2012,  6,  1,   1, 7, 2012,  6,  3},
    {2012,  6,  1,   2, 7, 2012,  6, 10},
    {2012,  6,  1,   3, 7, 2012,  6, 17},
    {2012,  6,  1,   4, 7, 2012,  6, 24},
    {2012,  6,  1,   5, 7, 2012,  7,  1},
    {2012,  6,  1,   6, 7, 2012,  7,  8},
    {2012,  6,  1,   7, 7, 2012,  7, 15},
    {2012,  6,  1,   8, 7, 2012,  7, 22},
    {2012,  6,  1,   9, 7, 2012,  7, 29},
    {2012,  6,  1,  10, 7, 2012,  8,  5},
    {2012,  6,  1,  11, 7, 2012,  8, 12},
    {2012,  6,  1,  12, 7, 2012,  8, 19},
    {2012,  6,  1,  13, 7, 2012,  8, 26},
    {2012,  6,  1,  14, 7, 2012,  9,  2},
    {2012,  6,  1,  15, 7, 2012,  9,  9},
    {2012,  6,  1,  16, 7, 2012,  9, 16},
    {2012,  6,  1,  17, 7, 2012,  9, 23},
    {2012,  6,  1,  18, 7, 2012,  9, 30},
    {2012,  6,  1,  19, 7, 2012, 10,  7},
    {2012,  6,  1,  20, 7, 2012, 10, 14},
};
