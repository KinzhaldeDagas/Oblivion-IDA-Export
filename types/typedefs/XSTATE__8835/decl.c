struct _XSTATE
{
ULONG64 Mask;
ULONG64 CompactionMask;
ULONG64 Reserved[6];
YMMCONTEXT YmmContext;
};
