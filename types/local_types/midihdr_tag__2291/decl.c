struct midihdr_tag
{
LPSTR lpData;
DWORD dwBufferLength;
DWORD dwBytesRecorded;
DWORD_PTR dwUser;
DWORD dwFlags;
__unaligned __declspec(align(1)) midihdr_tag *lpNext;
DWORD_PTR reserved;
DWORD dwOffset;
DWORD_PTR dwReserved[8];
};
