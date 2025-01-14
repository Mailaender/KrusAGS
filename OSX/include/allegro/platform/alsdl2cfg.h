/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      Configuration defines for use with SDL2.
 *
 *      By Edward Rudd.
 *
 *      See readme.txt for copyright information.
 */


#ifndef ALSDL2CFG_H
#define ALSDL2CFG_H

/* Provide implementations of missing functions */
#define ALLEGRO_NO_STRICMP
#define ALLEGRO_NO_STRLWR
#define ALLEGRO_NO_STRUPR

/* Override default definitions for this platform */
#define AL_RAND()    ((rand() >> 16) & 0x7fff)

/* A static auto config */
#define ALLEGRO_HAVE_DIRENT_H   1
#define ALLEGRO_HAVE_INTTYPES_H 1
#define ALLEGRO_HAVE_STDINT_H   1
#define ALLEGRO_HAVE_SYS_TIME_H 1
#define ALLEGRO_HAVE_SYS_STAT_H 1
#define ALLEGRO_HAVE_MKSTEMP    1

/* Describe this platform */
#define ALLEGRO_PLATFORM_STR  "SDL2"
#define ALLEGRO_CONSOLE_OK
#define ALLEGRO_USE_CONSTRUCTOR
#define ALLEGRO_MULTITHREADED

/* Endianesse - different between Intel and PPC based Systems */
#ifdef __LITTLE_ENDIAN__
#define ALLEGRO_LITTLE_ENDIAN
#endif
#ifdef __BIG_ENDIAN__
#define ALLEGRO_BIG_ENDIAN
#endif

/* Exclude ASM */

#ifndef ALLEGRO_NO_ASM
#define ALLEGRO_NO_ASM
#endif

/* Arrange for other headers to be included later on */
#define ALLEGRO_EXTRA_HEADER     "allegro/platform/alsdl2.h"


#endif
