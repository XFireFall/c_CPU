/** \file asm_language.h
 */
#ifndef ASM_LANGUAGE_H_INCLUDED
#define ASM_LANGUAGE_H_INCLUDED

#include <stdio.h>

#include "../lib/constants.h"


/** \brief All the types used in the assembler
 *
 * \param LABEL_t  (-1) - position in the in the program binary code
 * \param UNKNOWN_t (0) - in case something has indefinite type
 * \param NUM_t     (1) - constant number
 * \param REG_t     (2) - constant register
 * \param S_NUM_t   (3) - position in SRAM to which the register points
 * \param S_REG_t   (4) - position in SRAM to which the constant points
 *
 */
enum {LABEL_t = -1,
      UNKNOWN_t,
      NUM_t,
      REG_t,
      S_NUM_t,
      S_REG_t};

/** \brief All the commands of the assembler (according to asm_commands.h)
 *
 */
enum Commands
{
    #define DEF_CMD( name, code, argc, instruction ) CMD_##name = (code),
    #include "asm_commands.h"
    #undef DEF_CMD
    command_end
};


//=====================================================================

/** \brief Prints given type of an argument
 *
 * \param argtype int [in] - type of some argument
 *
 */
void print_arg_type(int argtype);


/** \brief Prints given argument with its type
 *
 * \param argtype int [in] - type of given argument
 * \param arg int [in] - the argument to print
 *
 */
void print_arg(int argtype, int arg);


/** \brief Writes description on all included functions
 *
 */
void print_assembler_info();


#endif // ASM_LANGUAGE_H_INCLUDED
