struct SYSTEM_DLL_INIT_BLOCK
{
ULONG version;
ULONG unknown1[3];
ULONG64 unknown2;
ULONG64 pLdrInitializeThunk;
ULONG64 pKiUserExceptionDispatcher;
ULONG64 pKiUserApcDispatcher;
ULONG64 pKiUserCallbackDispatcher;
ULONG64 pRtlUserThreadStart;
ULONG64 pRtlpQueryProcessDebugInformationRemote;
ULONG64 ntdll_handle;
ULONG64 pLdrSystemDllInitBlock;
ULONG64 pRtlpFreezeTimeBias;
};
