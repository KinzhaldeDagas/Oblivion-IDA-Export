NiTPointerMap<NiObject *,NiObject *> **__thiscall sub_478B90(NiTPointerMap<NiObject *,NiObject *> **this)
{
  NiTPointerMap<NiObject *,NiObject *> *v2; // eax
  NiTPointerMap<NiObject *,NiObject *> *v3; // eax
  NiTPointerMap<NiObject *,bool> *v4; // eax
  NiTPointerMap<NiObject *,bool> *v5; // eax

  v2 = (NiTPointerMap<NiObject *,NiObject *> *)FormHeapAlloc(0x10u);
  if ( v2 )
    v3 = NiTPointerMap<NiObject *,NiObject *>::NiTPointerMap<NiObject *,NiObject *>(v2, 0x101u);
  else
    v3 = 0;
  *this = v3;
  v4 = (NiTPointerMap<NiObject *,bool> *)FormHeapAlloc(0x10u);
  if ( v4 )
    v5 = NiTPointerMap<NiObject *,bool>::NiTPointerMap<NiObject *,bool>(v4, 0x25u);
  else
    v5 = 0;
  *(this + 1) = v5;
  *(this + 2) = (NiTPointerMap<NiObject *,NiObject *> *)dword_B3F580;
  *((_BYTE *)this + 0xC) = byte_B25648;
  return this;
}
