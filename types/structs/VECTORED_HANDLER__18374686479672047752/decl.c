struct __declspec(align(8)) VECTORED_HANDLER
{
list entry;
PVECTORED_EXCEPTION_HANDLER func;
ULONG count;
};
