NiDefaultAVObjectPalette *__thiscall NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(
        NiDefaultAVObjectPalette *this,
        int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-20h]

  NiObject_constr((NiObject *)this); /*0x6c5388*/
  *(_DWORD *)this = &NiDefaultAVObjectPalette::`vftable'; /*0x6c538d*/
  *((_DWORD *)this + 3) = 0x25; /*0x6c539a*/
  *((_DWORD *)this + 2) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiAVObject *>::`vftable'; /*0x6c53af*/
  *((_DWORD *)this + 5) = 0; /*0x6c53b6*/
  v3 = FormHeapAlloc(0x94u); /*0x6c53c2*/
  v5 = 4 * *((_DWORD *)this + 3); /*0x6c53ce*/
  *((_DWORD *)this + 4) = v3; /*0x6c53d2*/
  _memset(v3, 0, v5); /*0x6c53d5*/
  *((_BYTE *)this + 0x18) = 1; /*0x6c53df*/
  *((_DWORD *)this + 2) = &NiTStringPointerMap<NiAVObject *>::`vftable'; /*0x6c53e2*/
  *((_DWORD *)this + 7) = a2; /*0x6c53f3*/
  sub_716690(this); /*0x6c53f6*/
  return this; /*0x6c53fd*/
}
