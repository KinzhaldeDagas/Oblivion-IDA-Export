void __thiscall NiDefaultAVObjectPalette::~NiDefaultAVObjectPalette(NiDefaultAVObjectPalette *this)
{
  *(_DWORD *)this = &NiDefaultAVObjectPalette::`vftable';
  NiTStringPointerMap<NiAVObject *>::~NiTStringPointerMap<NiAVObject *>((_DWORD *)this + 2);
  *(_DWORD *)this = &NiAVObjectPalette::`vftable';
  NiRefObject_destr(this);
}
