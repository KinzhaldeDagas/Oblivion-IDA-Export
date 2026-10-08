struct __declspec(align(8)) IDirectSoundCaptureImpl
{
IUnknown_0 IUnknown_inner;
IDirectSoundCapture_0 IDirectSoundCapture_iface;
LONG ref;
LONG refdsc;
LONG numIfaces;
IUnknown_0 *outer_unk;
DirectSoundCaptureDevice_0 *device;
BOOL has_dsc8;
};
