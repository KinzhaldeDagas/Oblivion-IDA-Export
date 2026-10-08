struct _ACTIVATION_CONTEXT_STACK64
{
ULONG64 ActiveFrame;
LIST_ENTRY64 FrameListCache;
ULONG Flags;
ULONG NextCookieSequenceNumber;
ULONG64 StackId;
};
