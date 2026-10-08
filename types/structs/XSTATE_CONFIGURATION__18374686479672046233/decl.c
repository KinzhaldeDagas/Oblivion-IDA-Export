struct _XSTATE_CONFIGURATION
{
ULONG64 EnabledFeatures;
ULONG64 EnabledVolatileFeatures;
ULONG Size;
unsigned __int32 OptimizedSave : 1;
unsigned __int32 CompactionEnabled : 1;
XSTATE_FEATURE Features[64];
ULONG64 EnabledSupervisorFeatures;
ULONG64 AlignedFeatures;
ULONG AllFeatureSize;
ULONG AllFeatures[64];
__declspec(align(8)) ULONG64 EnabledUserVisibleSupervisorFeatures;
};
