unsigned int __thiscall sub_76D200(
        unsigned __int16 *this,
        int a2,
        int a3,
        NiGeometryBufferData *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int v10; // ecx
  unsigned int v11; // ebp
  int v12; // eax
  unsigned __int16 Flags_high; // ax
  BOOL v14; // esi
  int v15; // ecx
  bool v16; // bl
  unsigned __int16 v17; // ax
  unsigned int *v18; // esi
  _DWORD *v19; // ecx

  if ( a2 ) /*0x76d214*/
  {
    if ( !a4 ) /*0x76d235*/
      return 0xFFFFFFFF; /*0x76d23e*/
  }
  else if ( !a4 || !NiGeometryBufferData_HasLiveStreams(a4) || !a5 ) /*0x76d227*/
  {
    return 0xFFFFFFFF; /*0x76d230*/
  }
  v10 = *(_DWORD *)(a5 + 0x20); /*0x76d241*/
  v11 = 0; /*0x76d244*/
  if ( !a2 || (v12 = *(_DWORD *)(a2 + 0xB4), (*(_WORD *)(v12 + 0x2E) & 0xF000) == 0x4000) ) /*0x76d26b*/
    Flags_high = HIBYTE(a4->Flags); /*0x76d27b*/
  else
    Flags_high = *(_BYTE *)(v12 + 0x2C) & 0x3F; /*0x76d271*/
  *((_DWORD *)this + 0x15) = 0; /*0x76d281*/
  v14 = 0; /*0x76d29e*/
  if ( Flags_high ) /*0x76d284*/
  {
    v11 = **(_DWORD **)(v10 + 0x20); /*0x76d289*/
    *((_DWORD *)this + 0x15) = Flags_high - 1; /*0x76d293*/
    if ( v11 ) /*0x76d296*/
    {
      if ( *(_DWORD *)(v11 + 8) ) /*0x76d298*/
        v14 = 1; /*0x76d284*/
    }
  }
  v15 = (*(unsigned __int8 *)(v10 + 0x18) >> 1) & 7; /*0x76d2ad*/
  v16 = v15 != 0; /*0x76d2b0*/
  if ( v15 || v14 ) /*0x76d2b9*/
  {
    sub_76D0A0(this, 1, 3, 0, 0); /*0x76d2c9*/
    if ( v14 ) /*0x76d2d0*/
    {
      v17 = *(unsigned __int8 *)(v11 + 4); /*0x76d2d2*/
      if ( (unsigned int)*(unsigned __int8 *)(v11 + 4) > *((_DWORD *)this + 0x15) ) /*0x76d2dc*/
        v17 = *(this + 0x2A); /*0x76d2de*/
      v18 = sub_76CA10(this, (NiD3DTextureStage *)v11, v17); /*0x76d2f0*/
      v19 = (_DWORD *)v18[3]; /*0x76d2f2*/
      if ( v16 ) /*0x76d2f7*/
      {
        sub_772FF0(v19, 1, 4, 0); /*0x76d2fd*/
        sub_772FF0((_DWORD *)v18[3], 3, 0, 0); /*0x76d30b*/
        sub_772FF0((_DWORD *)v18[3], 4, 4, 0); /*0x76d319*/
        sub_772FF0((_DWORD *)v18[3], 6, 0, 0); /*0x76d324*/
LABEL_26:
        sub_76CEF0((int)this, v11); /*0x76d34f*/
        return 0; /*0x76d352*/
      }
    }
    else
    {
      v18 = sub_76CA10(this, 0, 0); /*0x76d331*/
      v19 = (_DWORD *)v18[3]; /*0x76d333*/
    }
    sub_772FF0(v19, 1, 2, 0); /*0x76d33c*/
    sub_772FF0((_DWORD *)v18[3], 4, 2, 0); /*0x76d34a*/
    goto LABEL_26; /*0x76d34a*/
  }
  return 0; /*0x76d229*/
}
