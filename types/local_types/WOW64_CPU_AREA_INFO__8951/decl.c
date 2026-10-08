struct __declspec(align(4)) _WOW64_CPU_AREA_INFO
{
void *Context;
void *ContextEx;
void *ContextFlagsLocation;
WOW64_CPURESERVED *CpuReserved;
ULONG ContextFlag;
USHORT Machine;
};
