/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.23) *
 *******************************************************************/
#ifndef __wrappedlibsqlite3TYPES_H_
#define __wrappedlibsqlite3TYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFppppp_t)(void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(sqlite3_exec, iFppppp_t)

#endif // __wrappedlibsqlite3TYPES_H_
