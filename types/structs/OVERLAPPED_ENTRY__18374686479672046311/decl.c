struct __declspec(align(8)) _OVERLAPPED_ENTRY
{
ULONG_PTR lpCompletionKey;
LPOVERLAPPED_1 lpOverlapped;
ULONG_PTR Internal;
DWORD dwNumberOfBytesTransferred;
};
