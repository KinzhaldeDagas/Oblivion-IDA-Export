bool __thiscall OB_NiAdditionalGeometryData_RemoveDataBlock(void *this, unsigned int blockIndex, bool clearStreams)
{
  unsigned int v3; // ebp
  unsigned int v5; // edi
  unsigned int v7; // edx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // eax

  v3 = blockIndex; /*0x726202*/
  if ( blockIndex >= *((unsigned __int16 *)this + 0x13) ) /*0x726210*/
    return 0; /*0x726210*/
  v5 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * blockIndex); /*0x726215*/
  if ( !v5 ) /*0x72621c*/
    return 0; /*0x726221*/
  (*(void (__thiscall **)(unsigned int, _DWORD))(*(_DWORD *)v5 + 0xC))(v5, 0); /*0x72622f*/
  FormHeapFree(v5); /*0x726232*/
  blockIndex = 0; /*0x726243*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0x1C), v3, &blockIndex); /*0x726247*/
  if ( clearStreams ) /*0x726250*/
  {
    v7 = *((_DWORD *)this + 4); /*0x726252*/
    v8 = 0; /*0x726255*/
    if ( v7 ) /*0x726259*/
    {
      v9 = 0; /*0x72625b*/
      do /*0x726294*/
      {
        v10 = *((_DWORD *)this + 5); /*0x726260*/
        if ( v3 == *(_DWORD *)(v9 + v10 + 0x14) && v8 < v7 ) /*0x72626b*/
        {
          if ( v10 ) /*0x72626f*/
          {
            *(_DWORD *)(v9 + v10 + 4) = 0; /*0x726271*/
            *(_DWORD *)(v9 + v10 + 0xC) = 0; /*0x726275*/
            *(_DWORD *)(v9 + v10 + 8) = 0; /*0x726279*/
            *(_DWORD *)(v9 + v10 + 0x10) = 0; /*0x72627d*/
            *(_DWORD *)(v9 + v10 + 0x14) = 0; /*0x726281*/
            *(_DWORD *)(v9 + v10 + 0x18) = 0; /*0x726285*/
          }
        }
        v7 = *((_DWORD *)this + 4); /*0x726289*/
        ++v8; /*0x72628c*/
        v9 += 0x1C; /*0x72628f*/
      }
      while ( v8 < v7 ); /*0x726294*/
    }
  }
  return 1; /*0x72621e*/
}
