#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error Meh...
#endif

GO(XAllowDeviceEvents, iFppiL)
GO(XChangeDeviceControl, iFppip)
GO(XChangeDeviceDontPropagateList, iFpLipi)
GO(XChangeDeviceKeyMapping, iFppiipi)
GO(XChangeDeviceProperty, vFppLLiipi)
GO(XChangeFeedbackControl, iFppLp)
GO(XChangeKeyboardDevice, iFpp)
GO(XChangePointerDevice, iFppii)
GO(XCloseDevice, iFpp)
GO(XDeleteDeviceProperty, vFppL)
GO(XDeviceBell, iFppLLi)
GO(XFreeDeviceControl, vFp)
GO(XFreeDeviceList, vFp)
GO(XFreeDeviceMotionEvents, vFp)
GO(XFreeDeviceState, vFp)
GO(XFreeFeedbackList, vFp)
GO(XGetDeviceButtonMapping, iFpppu)
GO(XGetDeviceControl, pFppi)
GO(XGetDeviceDontPropagateList, pFpLp)
GO(XGetDeviceFocus, iFppppp)
GO(XGetDeviceKeyMapping, pFppCip)
GO(XGetDeviceModifierMapping, pFpp)
GO(XGetDeviceMotionEvents, pFppLLppp)
GO(XGetDeviceProperty, iFppLlliLppppp)
GO(XGetExtensionVersion, pFpp)
GO(XGetFeedbackControl, pFppp)
GO(XGetSelectedExtensionEvents, iFpLpppp)
GO(XGrabDevice, iFppLiipiiL)
GO(XGrabDeviceButton, iFppuupLiupii)
GO(XGrabDeviceKey, iFppuupLiupii)
GO(XIAllowEvents, iFpiiL)
GO(XIAllowTouchEvents, iFpiuLi)
GO(XIBarrierReleasePointer, vFpiLu)
GO(XIBarrierReleasePointers, vFppi)
GO(XIChangeHierarchy, iFppi)
GO(XIChangeProperty, vFpiLLiipi)
GO(XIDefineCursor, iFpiLL)
GO(XIDeleteProperty, vFpiL)
GO(XIFreeDeviceInfo, vFp)
GO(XIGetClientPointer, iFpLp)
GO(XIGetFocus, iFpip)
GO(XIGetProperty, iFpiLlliLppppp)
GO(XIGetSelectedEvents, pFpLp)
GO(XIGrabButton, iFpiiLLiiipip)
GO(XIGrabDevice, iFpiLLLiiip)
GO(XIGrabEnter, iFpiLLiiipip)
GO(XIGrabFocusIn, iFpiLiiipip)
GO(XIGrabKeycode, iFpiiLiiipip)
GO(XIGrabTouchBegin, iFpiLipip)
GO(XIListProperties, pFpip)
GO(XIQueryDevice, pFpip)
GO(XIQueryPointer, iFpiLppppppppp)
GO(XIQueryVersion, iFppp)
GO(XISelectEvents, iFpLpi)
GO(XISetClientPointer, iFpLi)
GO(XISetFocus, iFpiLL)
GO(XIUndefineCursor, iFpiL)
GO(XIUngrabButton, iFpiiLip)
GO(XIUngrabDevice, iFpiL)
GO(XIUngrabEnter, iFpiLip)
GO(XIUngrabFocusIn, iFpiLip)
GO(XIUngrabKeycode, iFpiiLip)
GO(XIUngrabTouchBegin, iFpiLip)
GO(XIWarpPointer, iFpiLLdduudd)
GO(XListDeviceProperties, pFppp)
GO(XListInputDevices, pFpp)
GO(XOpenDevice, pFpL)
GO(XQueryDeviceState, pFpp)
GO(XSelectExtensionEvent, iFpLpi)
GO(XSendExtensionEvent, iFppLiipp)
GO(XSetDeviceButtonMapping, iFpppi)
GO(XSetDeviceFocus, iFppLiL)
GO(XSetDeviceMode, iFppi)
GO(XSetDeviceModifierMapping, iFppp)
GO(XSetDeviceValuators, iFpppii)
GO(XUngrabDevice, iFppL)
GO(XUngrabDeviceButton, iFppuupL)
GO(XUngrabDeviceKey, iFppuupL)
GO(_XiGetDevicePresenceNotifyEvent, iFp)
GO(_xibadclass, vFpp)
GO(_xibaddevice, vFpp)
GO(_xibadevent, vFpp)
GO(_xibadmode, vFpp)
GO(_xidevicebusy, vFpp)
