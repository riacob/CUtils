/**
 * @file bit_macros.h
 * @author Riccardo Iacob
 * @brief Portable C bit manipulation macros
 * @version 0.1
 * @date 2023-03-15
 *
 * @copyright Copyright (c) 2023
 *
 */
#ifndef BIT_MACROS_H
#define BIT_MACROS_H

#include <stdint.h>

/**
 * @brief Macro that sets a bit in the given number
 * @param type: The type of the variable (I.E. 1UL)
 * @param num: The variable of which to set the bit
 * @param bit: The bit index of the bit to be set, from 0 to 'number of bits in the type' -1
 */
#define BIT_SET(type, num, bit) (num |= type << bit)

/**
 * @brief Macro that clears a bit in the given number
 * @param type: The type of the variable (I.E. 1UL)
 * @param num: The variable of which to clear the bit
 * @param bit: The bit index of the bit to be cleared, from 0 to 'number of bits in the type' -1
 */
#define BIT_CLEAR(type, num, bit) (num &= ~(type << bit))

/**
 * @brief Macro that toggles a bit in the given number
 * @param type: The type of the variable (I.E. 1UL)
 * @param num: The variable of which to toggle the bit
 * @param bit: The bit index of the bit to be toggled, from 0 to 'number of bits in the type' -1
 */
#define BIT_TOGGLE(type, num, bit) (num ^= type << bit)

/**
 * @brief Macro that reads a bit in the given number
 * @param type: The type of the variable (I.E. 1UL)
 * @param num: The variable of which to read the bit
 * @param bit: The bit index of the bit to be read, from 0 to 'number of bits in the type' -1
 */
#define BIT_CHECK(type, num, bit) (status = (num >> bit) & type)

/**
 * @brief Macro that force sets a bit in the given number
 * @param type: The type of the variable (I.E. 1UL)
 * @param num: The variable of which to force set the bit
 * @param bit: The bit index of the bit to be force set, from 0 to 'number of bits in the type' -1
 * @param state: The state that shall be enforced on the desired bit, 1 or 0
 */
#define BIT_FORCE(type, num, bit, state) (num = (num & ~(type << bit)) | (state << bit))

#endif