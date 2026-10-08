enum LDR_DLL_LOAD_REASON : __int32
{
LoadReasonStaticDependency = 0x0,
LoadReasonStaticForwarderDependency = 0x1,
LoadReasonDynamicForwarderDependency = 0x2,
LoadReasonDelayloadDependency = 0x3,
LoadReasonDynamicLoad = 0x4,
LoadReasonAsImageLoad = 0x5,
LoadReasonAsDataLoad = 0x6,
LoadReasonUnknown = 0xFFFFFFFF,
};
