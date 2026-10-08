struct _WINMM_MMDevice
{
WAVEOUTCAPSW out_caps;
WAVEINCAPSW in_caps;
WCHAR_0 *dev_id;
EDataFlow dataflow;
ISimpleAudioVolume_0 *volume;
GUID session;
UINT index;
UINT mixer_count;
CRITICAL_SECTION lock;
WINMM_Device *devices[256];
};
