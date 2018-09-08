/*
 * math.c
 *
 *  Created on: Sep 08, 2018
 * 	Last Edited: Sept 8, 2018
 *  Author: Matt Rainey
 */

/* Your assignment is to take the math function and implement at least the following functions:
 * + Add (num1 + num2)
 * - Subtract (num1 - num2)
 * * Multiply (num1 * num2)
 * / Divide (num1 / num2)
 * % Modulus (num1 % num2)
 * < Left Shift (num1 << num2)
 * > Right Shift (num1 >> num2)
 * & Bitwise AND (num1 & num2)
 * | Bitwise OR (num1 | num2)
 * ^ Bitwise XOR (num1 ^ num2)
 * ~ Bitwise Inverse (~num1) for this operation, num1 and num2 are still needed
*/
#include "math.h"
int math(int num1, int num2, char Operator){
    switch (Operator) {
        case '+': return num1 + num2;
        case '-': return num1 - num2;
        case '*': return num1 * num2;
        case '/': return num1 / num2;
        case '%': return num1 % num2;
        case '<': return num1 << num2;
        case '>': return num1 >> num2;
        case '&': return num1 & num2;
        case '|': return num1 | num2;
        case '^': return num1 ^ num2;
        case '~': return ~num1;
        default: return 1;
    }
}
