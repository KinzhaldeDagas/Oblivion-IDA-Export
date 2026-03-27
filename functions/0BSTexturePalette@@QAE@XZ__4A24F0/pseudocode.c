BSTexturePalette *__thiscall BSTexturePalette::BSTexturePalette(BSTexturePalette *this, unsigned int a2)
{
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *v3; // eax
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v9; // [esp-8h] [ebp-2Ch]

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &BSTexturePalette::`vftable';
  v3 = (NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *)FormHeapAlloc(0x10u);
  if ( v3 )
    v4 = NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>(
           v3,
           a2);
  else
    v4 = 0;
  *((_DWORD *)this + 2) = v4;
  v5 = (_DWORD *)FormHeapAlloc(0x14u);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0x20B;
    *v5 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiTexture>>::`vftable';
    v5[3] = 0;
    v7 = FormHeapAlloc(0x82Cu);
    v9 = 4 * v6[1];
    v6[2] = v7;
    _memset(v7, 0, v9);
    *((_BYTE *)v6 + 0x10) = 1;
    *v6 = &NiTStringPointerMap<NiPointer<NiTexture>>::`vftable';
    *((_DWORD *)this + 3) = v6;
  }
  else
  {
    *((_DWORD *)this + 3) = 0;
  }
  return this;
}
