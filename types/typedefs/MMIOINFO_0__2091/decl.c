struct __unaligned __declspec(align(4)) _MMIOINFO_0
{
DWORD dwFlags;
FOURCC fccIOProc;
LPMMIOPROC_0 pIOProc;
UINT wErrorRet;
HTASK hTask;
LONG cchBuffer;
HPSTR_0 pchBuffer;
HPSTR_0 pchNext;
HPSTR_0 pchEndRead;
HPSTR_0 pchEndWrite;
LONG lBufOffset;
LONG lDiskOffset;
DWORD adwInfo[3];
DWORD dwReserved1;
DWORD dwReserved2;
HMMIO hmmio;
};
