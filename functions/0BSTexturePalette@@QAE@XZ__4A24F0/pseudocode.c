BSTexturePalette *__thiscall BSTexturePalette::BSTexturePalette(BSTexturePalette *this, unsigned int a2)
{
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *v3; // eax
  NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  unsigned int v9; // [esp-8h] [ebp-2Ch]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x4a2523*/
  *((_DWORD *)this + 1) = 0; /*0x4a2529*/
  InterlockedIncrement((volatile LONG *)&MEMORY[0xB3F9B0][0xED]); /*0x4a252c*/
  *(_DWORD *)this = &BSTexturePalette::`vftable'; /*0x4a2538*/
  v3 = (NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>> *)FormHeapAlloc(0x10u); /*0x4a253e*/
  if ( v3 ) /*0x4a2551*/
    v4 = NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>::NiTPointerMap<BSFileEntry const *,NiPointer<NiTexture>>( /*0x4a255a*/
           v3,
           a2);
  else
    v4 = 0; /*0x4a2561*/
  *((_DWORD *)this + 2) = v4; /*0x4a2569*/
  v5 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4a256c*/
  v6 = v5; /*0x4a2571*/
  if ( v5 ) /*0x4a2581*/
  {
    v5[1] = 0x20B; /*0x4a258a*/
    *v5 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,NiPointer<NiTexture>>::`vftable'; /*0x4a2597*/
    v5[3] = 0; /*0x4a259d*/
    v7 = FormHeapAlloc(0x82Cu); /*0x4a25a5*/
    v9 = 4 * v6[1]; /*0x4a25b1*/
    v6[2] = v7; /*0x4a25b4*/
    _memset(v7, 0, v9); /*0x4a25b7*/
    *((_BYTE *)v6 + 0x10) = 1; /*0x4a25bc*/
    *v6 = &NiTStringPointerMap<NiPointer<NiTexture>>::`vftable'; /*0x4a25c0*/
    *((_DWORD *)this + 3) = v6; /*0x4a25c9*/
  }
  else
  {
    *((_DWORD *)this + 3) = 0; /*0x4a25ce*/
  }
  return this; /*0x4a25d3*/
}
