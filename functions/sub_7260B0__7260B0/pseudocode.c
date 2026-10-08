//
//
// [2026-10-03 ABI correction] Verified thiscall ECX, four stack arguments (index, data, byte size, copy flag), AL boolean result, ret 0x10. Previous decompiler prototype incorrectly promoted EDI to an input argument. Leaf caller 0x7F1DB0 and Fallout SetDataBlock 0x82BF9350 corroborate roles.
bool __thiscall OB_NiAdditionalGeometryData_SetDataBlock_010201A0(
        void *this,
        unsigned int blockIndex,
        void *data,
        unsigned int byteCount,
        bool copyData)
{
  unsigned int v5; // ebx
  int v7; // esi
  void *v9; // edi

  v5 = byteCount; /*0x7260b5*/
  if ( blockIndex < *((unsigned __int16 *)this + 0x13) /*0x7260d1*/
    && (byteCount = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * blockIndex), (v7 = byteCount) != 0) )
  {
    if ( *(_DWORD *)(byteCount + 4) != v5 ) /*0x7260f2*/
    {
      (*(void (__thiscall **)(unsigned int, _DWORD))(*(_DWORD *)byteCount + 0xC))(byteCount, 0); /*0x7260fd*/
      *(_DWORD *)(v7 + 8) = 0; /*0x7260ff*/
    }
  }
  else
  {
    v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x50))(this); /*0x7260dd*/
    byteCount = v7; /*0x7260e1*/
    if ( !v7 ) /*0x7260e5*/
      return 0; /*0x7260ec*/
  }
  if ( !*(_DWORD *)(v7 + 8) ) /*0x726106*/
  {
    if ( copyData ) /*0x726112*/
    {
      *(_BYTE *)(v7 + 0xD) = *((_WORD *)this + 6) < 0x40u; /*0x72611d*/
      v9 = (void *)(**(int (__thiscall ***)(int, unsigned int))v7)(v7, v5); /*0x726128*/
      if ( data ) /*0x726130*/
        memcpy(v9, data, v5); /*0x726135*/
      (*(void (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)v7 + 4))(v7, v9, 0); /*0x726147*/
    }
    else
    {
      v9 = data; /*0x72614b*/
    }
    *(_DWORD *)(v7 + 4) = v5; /*0x72614f*/
    *(_DWORD *)(v7 + 8) = v9; /*0x726152*/
  }
  if ( blockIndex >= *((unsigned __int16 *)this + 0x12) ) /*0x726162*/
    NiTArray_SetSize((unsigned __int16 *)this + 0xE, blockIndex + *((unsigned __int16 *)this + 0x15)); /*0x72616d*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), blockIndex, &byteCount); /*0x72617a*/
  *(_BYTE *)(v7 + 0xC) = copyData; /*0x726184*/
  return 1; /*0x7260e7*/
}
