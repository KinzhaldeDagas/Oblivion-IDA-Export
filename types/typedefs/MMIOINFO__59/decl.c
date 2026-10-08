struct _MMIOINFO
{
DWORD dwFlags;
FOURCC fccIOProc;
LPMMIOPROC pIOProc;
UINT wErrorRet;
HTASK htask;
LONG cchBuffer;
HPSTR pchBuffer;
HPSTR pchNext;
HPSTR pchEndRead;
HPSTR pchEndWrite;
LONG lBufOffset;
LONG lDiskOffset;
DWORD adwInfo[3];
DWORD dwReserved1;
DWORD dwReserved2;
HMMIO hmmio;
};
