void *__thiscall sub_46E0D0(_DWORD *this)
{
  int v2; // eax
  size_t v4; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 1); /*0x46e0d4*/
  if ( v2 ) /*0x46e0d9*/
  {
    LODWORD(v4) = 4; /*0x46e0de*/
    Src = *(_DWORD *)(v2 + 0xC); /*0x46e0ea*/
    TESForm_PutFormRecordChunkData(0x47494650, &Src, v4); /*0x46e0ee*/
  }
  LODWORD(v4) = 4; /*0x46e0f6*/
  return TESForm_PutFormRecordChunkData(0x43504650, this + 2, v4); /*0x46e109*/
}
