void __thiscall sub_76CEF0(int this, unsigned int a2)
{
  unsigned __int16 v3; // ax
  unsigned int *v4; // eax
  unsigned int *v5; // edi
  _DWORD *v6; // ecx
  NiD3DPass *v7; // ecx

  if ( *(_DWORD *)(this + 0x3C) ) /*0x76cef3*/
  {
    if ( *(_BYTE *)(this + 0x50) ) /*0x76cefd*/
    {
      if ( a2 ) /*0x76cf09*/
      {
        v3 = *(unsigned __int8 *)(a2 + 4); /*0x76cf0b*/
        if ( (unsigned int)*(unsigned __int8 *)(a2 + 4) > *(_DWORD *)(this + 0x54) ) /*0x76cf15*/
          v3 = *(_WORD *)(this + 0x54); /*0x76cf17*/
        v4 = sub_76CA10((_DWORD *)this, (NiD3DTextureStage *)a2, v3); /*0x76cf23*/
        v5 = v4; /*0x76cf28*/
        if ( v4 ) /*0x76cf2c*/
        {
          sub_772FF0((_DWORD *)v4[3], 1, 3, 0); /*0x76cf37*/
          v6 = (_DWORD *)v5[3]; /*0x76cf40*/
          if ( *(_BYTE *)(this + 0x50) ) /*0x76cf3c*/
          {
            sub_772FF0(v6, 4, 4, 0); /*0x76cf4b*/
            sub_772FF0((_DWORD *)v5[3], 6, 0, 0); /*0x76cf59*/
          }
          else
          {
            sub_772FF0(v6, 4, 2, 0); /*0x76cf5f*/
          }
        }
      }
    }
    v7 = *(NiD3DPass **)(this + 0x3C); /*0x76cf65*/
    if ( v7 ) /*0x76cf6a*/
    {
      if ( v7->RefCount-- == 1 ) /*0x76cf6c*/
        NiD3DPass_ReleaseToPool(v7); /*0x76cf72*/
      *(_DWORD *)(this + 0x3C) = 0; /*0x76cf77*/
    }
    ++*(_DWORD *)(this + 0x38); /*0x76cf7e*/
    *(_DWORD *)(this + 0x58) = 0; /*0x76cf82*/
    *(_DWORD *)(this + 0x5C) = 0; /*0x76cf89*/
  }
}
