#ifndef CONSTANTS_H_INCLUDED
#define CONSTANTS_H_INCLUDED

#define RED         "\033[0;31m"
#define GREEN       "\033[0;32m"
#define PURPLE      "\033[0;35m"
#define BLUE        "\033[0;34m"

#define RESET       "\033[0m"
#define UNDERLINE   "\033[4m"
#define ALERT       "\033[5m"

#define MAX_STR_LEN    (100) /**< Maximum of string length */
#define MAX_LBL_NUM    (100) /**< Maximum allowed variables in a program */
#define MAX_VAR_NUM    (100) /**< Maximum allowed labels in a program */
#define MAX_OF_ARGC    (3)   /**< Maximum of commands arguments */
#define SRAM_CAPACITY  (32)  /**< Capacity of SRAM array */
#define REG_CAPACITY   (128) /**< Capacity of MAX_OF_ARGC array */

#endif // CONSTANTS_H_INCLUDED
