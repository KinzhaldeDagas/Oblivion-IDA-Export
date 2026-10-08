struct DirectSoundCaptureDevice
{
GUID guid;
LONG ref;
DSCCAPS drvcaps;
BYTE *buffer;
DWORD buflen;
DWORD write_pos_bytes;
WAVEFORMATEX *pwfx;
IDirectSoundCaptureBufferImpl_0 *capture_buffer;
DWORD state;
CRITICAL_SECTION lock;
IMMDevice_0 *mmdevice;
IAudioClient_0 *client;
IAudioCaptureClient_0 *capture;
list entry;
};
