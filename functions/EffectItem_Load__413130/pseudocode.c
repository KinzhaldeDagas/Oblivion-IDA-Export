char __thiscall EffectItem_Load(char *this, Data *a2, const char *ArgList)
{
  _DWORD *v4; // eax
  const char *v5; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  char *v11; // edi
  const char *v12; // eax
  _BYTE v13[12]; // [esp+0h] [ebp-24h] BYREF
  char *v14; // [esp+Ch] [ebp-18h]
  char Dst[4]; // [esp+10h] [ebp-14h] BYREF
  int v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]

  TESFile_GetNextChunk(a2);
  if ( TESFile_GetChunkType(a2) != 0x54494645 )
    return 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  TESFile_GetChunkData(a2, this, 0x18u);
  v4 = (_DWORD *)EffectSettingCollection_LookupByCode(*(_DWORD *)this);
  *((_DWORD *)this + 7) = v4;
  if ( v4 )
  {
    v7 = v4[0x16];
    if ( (v7 & 0x1180000) != 0 && (v7 & 0x1000000) != 0 )
      *((_DWORD *)this + 5) = v4[0x18];
    if ( v4[0x26] != 0x46464553 )
      return 1;
    TESFile_GetNextChunk(a2);
    if ( TESFile_GetChunkType(a2) == 0x54494353 )
    {
      if ( *((_DWORD *)this + 6)
        || ((v8 = FormHeapAlloc(0x18u)) == 0
          ? (v8 = 0)
          : (*(_DWORD *)(v8 + 8) = 0, *(_WORD *)(v8 + 0xC) = 0, *(_WORD *)(v8 + 0xE) = 0),
            (*((_DWORD *)this + 6) = v8) != 0) )
      {
        *(_DWORD *)Dst = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        TESFile_GetChunkData(a2, Dst, 0x10u);
        *(_DWORD *)(*((_DWORD *)this + 6) + 4) = v16;
        **((_DWORD **)this + 6) = *(_DWORD *)Dst;
        *(_DWORD *)(*((_DWORD *)this + 6) + 0x10) = v17;
        *(_BYTE *)(*((_DWORD *)this + 6) + 0x14) = v18;
        TESForm_ResolveFormID(*((UInt32 **)this + 6), a2);
        v9 = *((_DWORD *)this + 6);
        if ( *(_DWORD *)(v9 + 0x10) )
        {
          if ( !EffectSettingCollection_LookupByCode(*(_DWORD *)(v9 + 0x10)) )
            *(_DWORD *)(*((_DWORD *)this + 6) + 0x10) = 0;
        }
        TESFile_GetNextChunk(a2);
        if ( TESFile_GetChunkType(a2) == 0x4C4C5546 )
        {
          v10 = a2->currentChunk.length + 1;
          _alloca_();
          v14 = v13;
          _memset(v13, 0, v10);
          v11 = v14;
          TESFile_GetChunkData(a2, v14, 0);
          BSStringT_Set((BSStringT *)(*((_DWORD *)this + 6) + 8), v11, 0);
          return 1;
        }
      }
      else
      {
        v12 = ArgList;
        if ( !ArgList )
          v12 = "{unknown}";
        PrintError("Unable to allocate Script Effect Data in spell '%s'", v12);
      }
      return 1;
    }
    return 0;
  }
  v5 = ArgList;
  if ( !ArgList )
    v5 = "{unknown}";
  PrintError("Unknown EffectSetting '%d' encountered when loading EffectItem in spell '%s'", *(_DWORD *)this, v5);
  return 1;
}
