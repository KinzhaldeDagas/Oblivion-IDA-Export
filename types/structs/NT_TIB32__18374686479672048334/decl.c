struct _NT_TIB32
{
ULONG ExceptionList;
ULONG StackBase;
ULONG StackLimit;
ULONG SubSystemTib;
ULONG FiberData;
ULONG ArbitraryUserPointer;
ULONG Self;
};
