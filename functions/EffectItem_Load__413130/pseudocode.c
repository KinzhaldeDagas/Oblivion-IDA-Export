char __thiscall EffectItem_Load(char *this, Data *a2, const char *ArgList)
{
  _DWORD *v4; // eax
  const char *v5; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // edi
  char *v11; // edi
  const char *v12; // eax
  int v13[3]; // [esp+0h] [ebp-24h] BYREF
  char *v14; // [esp+Ch] [ebp-18h]
  char Dst[4]; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]

  TESFile_GetNextChunk(a2); /*0x41314a*/
  if ( TESFile_GetChunkType(a2) != 0x54494645 ) /*0x41315b*/
    return 0; /*0x41315b*/
  *(_DWORD *)this = 0; /*0x413163*/
  *((_DWORD *)this + 1) = 0; /*0x413165*/
  *((_DWORD *)this + 2) = 0; /*0x413168*/
  *((_DWORD *)this + 3) = 0; /*0x41316b*/
  *((_DWORD *)this + 4) = 0; /*0x413170*/
  *((_DWORD *)this + 5) = 0; /*0x413176*/
  TESFile_GetChunkData(a2, this, 0x18u); /*0x413179*/
  v4 = (_DWORD *)EffectSettingCollection_LookupByCode(*(_DWORD *)this); /*0x413181*/
  *((_DWORD *)this + 7) = v4; /*0x41318b*/
  if ( v4 )
  {
    v7 = v4[0x16]; /*0x4131b4*/
    if ( (v7 & 0x1180000) != 0 && (v7 & 0x1000000) != 0 ) /*0x4131c7*/
      *((_DWORD *)this + 5) = v4[0x18]; /*0x4131cc*/
    if ( v4[0x26] != 0x46464553 ) /*0x4131d9*/
      return 1; /*0x413300*/
    TESFile_GetNextChunk(a2); /*0x4131e1*/
    if ( TESFile_GetChunkType(a2) == 0x54494353 )
    {
      if ( *((_DWORD *)this + 6)
        || ((v8 = FormHeapAlloc(0x18u)) == 0
          ? (v8 = 0)
          : (*(_DWORD *)(v8 + 8) = 0, *(_WORD *)(v8 + 0xC) = 0, *(_WORD *)(v8 + 0xE) = 0),
            (*((_DWORD *)this + 6) = v8) != 0) )
      {
        *(_DWORD *)Dst = 0; /*0x413229*/
        v16 = 0; /*0x41322c*/
        v17 = 0; /*0x41322f*/
        v18 = 0; /*0x413232*/
        TESFile_GetChunkData(a2, Dst, 0x10u); /*0x41323d*/
        *(_DWORD *)(*((_DWORD *)this + 6) + 4) = v16; /*0x413248*/
        **((_DWORD **)this + 6) = *(_DWORD *)Dst; /*0x413251*/
        *(_DWORD *)(*((_DWORD *)this + 6) + 0x10) = v17; /*0x413259*/
        *(_BYTE *)(*((_DWORD *)this + 6) + 0x14) = v18; /*0x413262*/
        TESForm_ResolveFormID(*((UInt32 **)this + 6), a2); /*0x41326a*/
        v9 = *((_DWORD *)this + 6); /*0x41326f*/
        if ( *(_DWORD *)(v9 + 0x10) ) /*0x413272*/
        {
          if ( !EffectSettingCollection_LookupByCode(*(_DWORD *)(v9 + 0x10)) ) /*0x41327d*/
            *(_DWORD *)(*((_DWORD *)this + 6) + 0x10) = 0; /*0x41328c*/
        }
        TESFile_GetNextChunk(a2); /*0x413291*/
        if ( TESFile_GetChunkType(a2) == 0x4C4C5546 ) /*0x4132a2*/
        {
          v10 = a2->currentChunk.length + 1; /*0x4132aa*/
          _alloca_(v13[0]); /*0x4132af*/
          v14 = (char *)v13; /*0x4132ba*/
          _memset((int)v13, 0, v10); /*0x4132bd*/
          v11 = v14; /*0x4132c2*/
          TESFile_GetChunkData(a2, v14, 0); /*0x4132cd*/
          BSStringT_Set((BSStringT *)(*((_DWORD *)this + 6) + 8), v11, 0); /*0x4132db*/
          return 1; /*0x4132e2*/
        }
      }
      else
      {
        v12 = ArgList; /*0x4132e4*/
        if ( !ArgList ) /*0x4132e9*/
          v12 = "{unknown}"; /*0x4132eb*/
        PrintError("Unable to allocate Script Effect Data in spell '%s'", v12); /*0x4132f6*/
      }
      return 1; /*0x4132a2*/
    }
    return 0; /*0x413302*/
  }
  v5 = ArgList; /*0x413190*/
  if ( !ArgList ) /*0x413195*/
    v5 = "{unknown}"; /*0x413197*/
  PrintError("Unknown EffectSetting '%d' encountered when loading EffectItem in spell '%s'", *(_DWORD *)this, v5); /*0x4131a5*/
  return 1; /*0x413307*/
}
