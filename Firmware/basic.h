/*
 * This file is part of the Bus Pirate project
 * (http://code.google.com/p/the-bus-pirate/).
 *
 * Initially written by Chris van Dongen, 2010.
 *
 * To the extent possible under law, the project has
 * waived all copyright and related or neighboring rights to Bus Pirate.
 *
 * For details see: http://creativecommons.org/publicdomain/zero/1.0/.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef BP_BASIC_H
#define BP_BASIC_H

#include "configuration.h"

#ifdef BP_ENABLE_BASIC_SUPPORT

/**
 * Clears any previously loaded BASIC program and resets the internal variables
 * state to a clean slate.
 */
void bp_basic_initialize(void);

/**
 * Activates the interactive BASIC interpreter, resuming to normal operations
 * only after the user actively exits the interpreter itself.
 */
void bp_basic_enter_interactive_interpreter(void);

#endif /* BP_ENABLE_BASIC_SUPPORT */

#endif /* !BP_BASIC_H */