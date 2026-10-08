struct _NT_TIB64
{
ULONG64 ExceptionList;
ULONG64 StackBase;
ULONG64 StackLimit;
ULONG64 SubSystemTib;
ULONG64 FiberData;
ULONG64 ArbitraryUserPointer;
ULONG64 Self;
};
