enum DBG_STATE : __int32
{
DbgIdle = 0x0,
DbgReplyPending = 0x1,
DbgCreateThreadStateChange = 0x2,
DbgCreateProcessStateChange = 0x3,
DbgExitThreadStateChange = 0x4,
DbgExitProcessStateChange = 0x5,
DbgExceptionStateChange = 0x6,
DbgBreakpointStateChange = 0x7,
DbgSingleStepStateChange = 0x8,
DbgLoadDllStateChange = 0x9,
DbgUnloadDllStateChange = 0xA,
};
