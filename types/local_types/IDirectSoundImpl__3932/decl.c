struct __declspec(align(8)) IDirectSoundImpl
{
IUnknown_0 IUnknown_inner;
IDirectSound8_0 IDirectSound8_iface;
IUnknown_0 *outer_unk;
LONG ref;
LONG refds;
LONG numIfaces;
DirectSoundDevice_0 *device;
BOOL has_ds8;
};
