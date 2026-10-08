struct _MainAVIHeader
{
DWORD dwMicroSecPerFrame;
DWORD dwMaxBytesPerSec;
DWORD dwPaddingGranularity;
DWORD dwFlags;
DWORD dwTotalFrames;
DWORD dwInitialFrames;
DWORD dwStreams;
DWORD dwSuggestedBufferSize;
DWORD dwWidth;
DWORD dwHeight;
DWORD dwReserved[4];
};
