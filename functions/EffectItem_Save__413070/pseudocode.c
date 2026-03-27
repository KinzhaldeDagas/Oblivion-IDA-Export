int __thiscall EffectItem_Save(_DWORD *Src)
{
  int result; // eax
  void *v3; // esp
  int v4; // ecx
  size_t v5; // [esp-14h] [ebp-1Ch] BYREF
  int v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp-8h] [ebp-10h]
  size_t v8; // [esp-4h] [ebp-Ch]

  LODWORD(v8) = 0x18;
  TESForm_PutFormRecordChunkData(0x54494645, Src, v8);
  result = *(Src + 7);
  if ( *(_DWORD *)(result + 0x98) == 0x46464553 )
  {
    if ( *(Src + 6) )
    {
      v3 = alloca(0x10);
      v6 = *(_DWORD *)(*(Src + 6) + 4);
      HIDWORD(v5) = *(_DWORD *)*(Src + 6);
      v7 = *(_DWORD *)(*(Src + 6) + 0x10);
      LODWORD(v5) = 0x10;
      LOBYTE(v8) = *(_BYTE *)(*(Src + 6) + 0x14);
      TESForm_PutFormRecordChunkData(0x54494353, (char *)&v5 + 4, v5);
      result = *(Src + 6);
      v4 = *(_DWORD *)(result + 8);
      if ( v4 )
        return j_TESForm_PutCurrentChunkData(
                 0x4C4C5546,
                 v4,
                 *(_DWORD *)(result + 8) + strlen(*(const char **)(result + 8)) + 1 - v4);
    }
  }
  return result;
}
