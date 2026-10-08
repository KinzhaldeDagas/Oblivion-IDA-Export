struct tagWINE_MMIO
{
MMIOINFO info;
tagWINE_MMIO *lpNext;
IOProcList *ioProc;
unsigned __int32 bTmpIOProc : 1;
unsigned __int32 bBufferLoaded : 1;
DWORD dwFileSize;
};
