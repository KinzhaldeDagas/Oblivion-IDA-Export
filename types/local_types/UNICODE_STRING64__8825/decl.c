struct _UNICODE_STRING64
{
USHORT Length;
USHORT MaximumLength;
__declspec(align(8)) ULONG64 Buffer;
};
