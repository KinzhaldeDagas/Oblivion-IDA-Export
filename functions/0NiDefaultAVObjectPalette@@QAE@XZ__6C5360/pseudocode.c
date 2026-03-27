NiDefaultAVObjectPalette *__thiscall NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(
        NiDefaultAVObjectPalette *this,
        int a2)
{
  int v3; // eax
  int v5; // [esp-8h] [ebp-20h]

  NiObject_constr((NiObject *)this);
  *(_DWORD *)this = &NiDefaultAVObjectPalette::`vftable';
  *((_DWORD *)this + 3) = 0x25;
  *((_DWORD *)this + 2) = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiAVObject *>::`vftable';
  *((_DWORD *)this + 5) = 0;
  v3 = FormHeapAlloc(0x94u);
  v5 = 4 * *((_DWORD *)this + 3);
  *((_DWORD *)this + 4) = v3;
  _memset(v3, 0, v5);
  *((_BYTE *)this + 0x18) = 1;
  *((_DWORD *)this + 2) = &NiTStringPointerMap<NiAVObject *>::`vftable';
  *((_DWORD *)this + 7) = a2;
  sub_716690(this);
  return this;
}
