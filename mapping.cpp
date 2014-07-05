#include "CharlieCube.h"
#include <avr/io.h> 
#include <avr/pgmspace.h>

const LEDMap Cube::led_maps[] = {
  //Red,      Green,    Blue         xyz
  {{12,  8}, { 0,  8}, { 7,  8}}, // 000
  {{ 8,  7}, {12,  7}, { 0,  7}}, // 001
  {{ 7,  0}, { 8,  0}, {12,  0}}, // 002
  {{ 0, 12}, { 7, 12}, { 8, 12}}, // 003
  {{15,  9}, { 0,  9}, { 6,  9}}, // 010
  {{ 9,  6}, {15,  6}, { 0,  6}}, // 011
  {{ 6,  0}, { 9,  0}, {15,  0}}, // 012
  {{ 0, 15}, { 6, 15}, { 9, 15}}, // 013
  {{13, 10}, { 0, 10}, { 5, 10}}, // 020
  {{10,  5}, {13,  5}, { 0,  5}}, // 021
  {{ 5,  0}, {10,  0}, {13,  0}}, // 022
  {{ 0, 13}, { 5, 13}, {10, 13}}, // 023
  {{14, 11}, { 0, 11}, { 4, 11}}, // 030
  {{11,  4}, {14,  4}, { 0,  4}}, // 031
  {{ 4,  0}, {11,  0}, {14,  0}}, // 032
  {{ 0, 14}, { 4, 14}, {11, 14}}, // 033
  {{13,  9}, { 1,  9}, { 7,  9}}, // 100
  {{ 9,  7}, {13,  7}, { 1,  7}}, // 101
  {{ 7,  1}, { 9,  1}, {13,  1}}, // 102
  {{ 1, 13}, { 7, 13}, { 9, 13}}, // 103
  {{14,  8}, { 1,  8}, { 6,  8}}, // 110
  {{ 8,  6}, {14,  6}, { 1,  6}}, // 111
  {{ 6,  1}, { 8,  1}, {14,  1}}, // 112
  {{ 1, 14}, { 6, 14}, { 8, 14}}, // 113
  {{12, 11}, { 1, 11}, { 5, 11}}, // 120
  {{11,  5}, {12,  5}, { 1,  5}}, // 121
  {{ 5,  1}, {11,  1}, {12,  1}}, // 122
  {{ 1, 12}, { 5, 12}, {11, 12}}, // 123
  {{15, 10}, { 1, 10}, { 4, 10}}, // 130
  {{10,  4}, {15,  4}, { 1,  4}}, // 131
  {{ 4,  1}, {10,  1}, {15,  1}}, // 132
  {{ 1, 15}, { 4, 15}, {10, 15}}, // 133
  {{14, 10}, { 2, 10}, { 7, 10}}, // 200
  {{10,  7}, {14,  7}, { 2,  7}}, // 201
  {{ 7,  2}, {10,  2}, {14,  2}}, // 202
  {{ 2, 14}, { 7, 14}, {10, 14}}, // 203
  {{13, 11}, { 2, 11}, { 6, 11}}, // 210
  {{11,  6}, {13,  6}, { 2,  6}}, // 211
  {{ 6,  2}, {11,  2}, {13,  2}}, // 212
  {{ 2, 13}, { 6, 13}, {11, 13}}, // 213
  {{15,  8}, { 2,  8}, { 5,  8}}, // 220
  {{ 8,  5}, {15,  5}, { 2,  5}}, // 221
  {{ 5,  2}, { 8,  2}, {15,  2}}, // 222
  {{ 2, 15}, { 5, 15}, { 8, 15}}, // 223
  {{12,  9}, { 2,  9}, { 4,  9}}, // 230
  {{ 9,  4}, {12,  4}, { 2,  4}}, // 231
  {{ 4,  2}, { 9,  2}, {12,  2}}, // 232
  {{ 2, 12}, { 4, 12}, { 9, 12}}, // 233
  {{15, 11}, { 3, 11}, { 7, 11}}, // 300
  {{11,  7}, {15,  7}, { 3,  7}}, // 301
  {{ 7,  3}, {11,  3}, {15,  3}}, // 302
  {{ 3, 15}, { 7, 15}, {11, 15}}, // 303
  {{12, 10}, { 3, 10}, { 6, 10}}, // 310
  {{10,  6}, {12,  6}, { 3,  6}}, // 311
  {{ 6,  3}, {10,  3}, {12,  3}}, // 312
  {{ 3, 12}, { 6, 12}, {10, 12}}, // 313
  {{14,  9}, { 3,  9}, { 5,  9}}, // 320
  {{ 9,  5}, {14,  5}, { 3,  5}}, // 321
  {{ 5,  3}, { 9,  3}, {14,  3}}, // 322
  {{ 3, 14}, { 5, 14}, { 9, 14}}, // 323
  {{13,  8}, { 3,  8}, { 4,  8}}, // 330
  {{ 8,  4}, {13,  4}, { 3,  4}}, // 331
  {{ 4,  3}, { 8,  3}, {13,  3}}, // 332
  {{ 3, 13}, { 4, 13}, { 8, 13}}  // 333

};
