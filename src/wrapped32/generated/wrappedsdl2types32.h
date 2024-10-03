/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedsdl2TYPES32_H_
#define __wrappedsdl2TYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFp_t)(void*);
typedef int32_t (*iFp_t)(void*);
typedef int64_t (*IFp_t)(void*);
typedef void* (*pFv_t)(void);
typedef void* (*pFp_t)(void*);
typedef SDL2_GUID_t (*JFi_t)(int32_t);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpV_t)(void*, ...);
typedef int32_t (*iFip_t)(int32_t, void*);
typedef int32_t (*iFpi_t)(void*, int32_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef void* (*pFpi_t)(void*, int32_t);
typedef void* (*pFpp_t)(void*, void*);
typedef int32_t (*iFiip_t)(int32_t, int32_t, void*);
typedef int32_t (*iFppu_t)(void*, void*, uint32_t);
typedef int32_t (*iFppV_t)(void*, void*, ...);
typedef int64_t (*IFpIi_t)(void*, int64_t, int32_t);
typedef void* (*pFpii_t)(void*, int32_t, int32_t);
typedef void* (*pFppp_t)(void*, void*, void*);
typedef int32_t (*iFpLpp_t)(void*, uintptr_t, void*, void*);
typedef int32_t (*iFpLpV_t)(void*, uintptr_t, void*, ...);
typedef uintptr_t (*LFppLL_t)(void*, void*, uintptr_t, uintptr_t);
typedef uint32_t (*uFpippi_t)(void*, int32_t, void*, void*, int32_t);
typedef void* (*pFpiiiiu_t)(void*, int32_t, int32_t, int32_t, int32_t, uint32_t);
typedef void* (*pFuiiiuuuu_t)(uint32_t, int32_t, int32_t, int32_t, uint32_t, uint32_t, uint32_t, uint32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(SDL_FreeSurface, vFp_t) \
	GO(SDL_PollEvent, iFp_t) \
	GO(SDL_PushEvent, iFp_t) \
	GO(SDL_RWclose, iFp_t) \
	GO(SDL_RWsize, IFp_t) \
	GO(SDL_RWtell, IFp_t) \
	GO(SDL_GetBasePath, pFv_t) \
	GO(SDL_GL_GetProcAddress, pFp_t) \
	GO(SDL_JoystickGetDeviceGUID, JFi_t) \
	GO(SDL_AddEventWatch, vFpp_t) \
	GO(SDL_DelEventWatch, vFpp_t) \
	GO(SDL_SetWindowIcon, vFpp_t) \
	GO(SDL_Log, vFpV_t) \
	GO(SDL_GetCurrentDisplayMode, iFip_t) \
	GO(SDL_GetDesktopDisplayMode, iFip_t) \
	GO(SDL_GameControllerAddMappingsFromRW, iFpi_t) \
	GO(SDL_WaitEventTimeout, iFpi_t) \
	GO(SDL_GetWindowDisplayMode, iFpp_t) \
	GO(SDL_GetWindowWMInfo, iFpp_t) \
	GO(SDL_OpenAudio, iFpp_t) \
	GO(SDL_SetWindowDisplayMode, iFpp_t) \
	GO(SDL_LoadBMP_RW, pFpi_t) \
	GO(SDL_notreal, pFpi_t) \
	GO(SDL_RWFromFile, pFpp_t) \
	GO(SDL_GetDisplayMode, iFiip_t) \
	GO(SDL_FillRect, iFppu_t) \
	GO(SDL_sscanf, iFppV_t) \
	GO(SDL_RWseek, IFpIi_t) \
	GO(SDL_CreateColorCursor, pFpii_t) \
	GO(SDL_CreateThread, pFppp_t) \
	GO(SDL_vsnprintf, iFpLpp_t) \
	GO(SDL_snprintf, iFpLpV_t) \
	GO(SDL_RWread, LFppLL_t) \
	GO(SDL_RWwrite, LFppLL_t) \
	GO(SDL_OpenAudioDevice, uFpippi_t) \
	GO(SDL_CreateRGBSurfaceWithFormatFrom, pFpiiiiu_t) \
	GO(SDL_CreateRGBSurface, pFuiiiuuuu_t)

#endif // __wrappedsdl2TYPES32_H_