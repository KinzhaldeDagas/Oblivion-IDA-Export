struct IDirectSoundCaptureBufferImpl
{
IDirectSoundCaptureBuffer8_0 IDirectSoundCaptureBuffer8_iface;
IDirectSoundNotify_0 IDirectSoundNotify_iface;
LONG numIfaces;
LONG ref;
LONG refn;
LONG has_dsc8;
DirectSoundCaptureDevice_0 *device;
DSCBUFFERDESC *pdscbd;
DWORD flags;
DSBPOSITIONNOTIFY *notifies;
int nrofnotifies;
HANDLE thread;
HANDLE sleepev;
};
