/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.23) *
 *******************************************************************/
#ifndef __wrappedsdl2mixerTYPES_H_
#define __wrappedsdl2mixerTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef void (*vFpp_t)(void*, void*);
typedef int32_t (*iFiw_t)(int32_t, int16_t);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpii_t)(void*, int32_t, int32_t);
typedef int32_t (*iFippp_t)(int32_t, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(Mix_ChannelFinished, vFp_t) \
	GO(Mix_HookMusicFinished, vFp_t) \
	GO(Mix_HookMusic, vFpp_t) \
	GO(Mix_SetPostMix, vFpp_t) \
	GO(MinorityMix_SetPosition, iFiw_t) \
	GO(Mix_UnregisterEffect, iFip_t) \
	GO(Mix_LoadMUS_RW, pFpi_t) \
	GO(Mix_LoadWAV_RW, pFpi_t) \
	GO(Mix_LoadMUSType_RW, pFpii_t) \
	GO(Mix_RegisterEffect, iFippp_t)

#endif // __wrappedsdl2mixerTYPES_H_
