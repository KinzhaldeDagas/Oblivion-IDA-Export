void __thiscall NiDefaultAVObjectPalette::~NiDefaultAVObjectPalette(NiDefaultAVObjectPalette *this)
{
  *(_DWORD *)this = &NiDefaultAVObjectPalette::`vftable'; /*0x6c54b8*/
  NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>((_DWORD *)this + 2); /*0x6c54c9*/
  *(_DWORD *)this = &NiAVObjectPalette::`vftable'; /*0x6c54d8*/
  NiRefObject_destr(this); /*0x6c54de*/
}
