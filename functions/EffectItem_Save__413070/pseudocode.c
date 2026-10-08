void *__thiscall EffectItem_Save(_DWORD *Src)
{
  void *result; // eax
  void *v3; // esp
  void *v4; // ecx
  size_t v5; // [esp-14h] [ebp-1Ch] BYREF
  int v6; // [esp-Ch] [ebp-14h]
  int v7; // [esp-8h] [ebp-10h]
  size_t v8; // [esp-4h] [ebp-Ch]

  LODWORD(v8) = 0x18; /*0x413081*/
  TESForm_PutFormRecordChunkData(0x54494645, Src, v8); /*0x413089*/
  result = (void *)*(Src + 7); /*0x41308e*/
  if ( *((_DWORD *)result + 0x26) == 0x46464553 ) /*0x41309e*/
  {
    if ( *(Src + 6) ) /*0x4130a0*/
    {
      v3 = alloca(0x10); /*0x4130ab*/
      v6 = *(_DWORD *)(*(Src + 6) + 4); /*0x4130b8*/
      HIDWORD(v5) = *(_DWORD *)*(Src + 6); /*0x4130c0*/
      v7 = *(_DWORD *)(*(Src + 6) + 0x10); /*0x4130c8*/
      LODWORD(v5) = 0x10; /*0x4130d1*/
      LOBYTE(v8) = *(_BYTE *)(*(Src + 6) + 0x14); /*0x4130d9*/
      TESForm_PutFormRecordChunkData(0x54494353, (char *)&v5 + 4, v5); /*0x4130dc*/
      result = (void *)*(Src + 6); /*0x4130e1*/
      v4 = *((void **)result + 2); /*0x4130e4*/
      if ( v4 ) /*0x4130ec*/
      {
        LODWORD(v5) = *((_DWORD *)result + 2) + strlen(*((const char **)result + 2)) + 1 - (_DWORD)v4; /*0x413101*/
        return j_TESForm_PutCurrentChunkData(0x4C4C5546, v4, v5); /*0x413108*/
      }
    }
  }
  return result; /*0x413113*/
}
