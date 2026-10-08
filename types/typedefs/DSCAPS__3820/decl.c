struct _DSCAPS
{
DWORD dwSize;
DWORD dwFlags;
DWORD dwMinSecondarySampleRate;
DWORD dwMaxSecondarySampleRate;
DWORD dwPrimaryBuffers;
DWORD dwMaxHwMixingAllBuffers;
DWORD dwMaxHwMixingStaticBuffers;
DWORD dwMaxHwMixingStreamingBuffers;
DWORD dwFreeHwMixingAllBuffers;
DWORD dwFreeHwMixingStaticBuffers;
DWORD dwFreeHwMixingStreamingBuffers;
DWORD dwMaxHw3DAllBuffers;
DWORD dwMaxHw3DStaticBuffers;
DWORD dwMaxHw3DStreamingBuffers;
DWORD dwFreeHw3DAllBuffers;
DWORD dwFreeHw3DStaticBuffers;
DWORD dwFreeHw3DStreamingBuffers;
DWORD dwTotalHwMemBytes;
DWORD dwFreeHwMemBytes;
DWORD dwMaxContigFreeHwMemBytes;
DWORD dwUnlockTransferRateHwBuffers;
DWORD dwPlayCpuOverheadSwBuffers;
DWORD dwReserved1;
DWORD dwReserved2;
};
