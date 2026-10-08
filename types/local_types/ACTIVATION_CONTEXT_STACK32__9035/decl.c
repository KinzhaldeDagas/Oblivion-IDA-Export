struct _ACTIVATION_CONTEXT_STACK32
{
ULONG ActiveFrame;
LIST_ENTRY32 FrameListCache;
ULONG Flags;
ULONG NextCookieSequenceNumber;
ULONG32 StackId;
};
