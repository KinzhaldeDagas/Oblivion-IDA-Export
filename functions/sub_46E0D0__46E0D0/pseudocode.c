void *__thiscall sub_46E0D0(_DWORD *this)
{
  int v2; // eax
  size_t v4; // [esp-4h] [ebp-Ch]
  int Src; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 1);
  if ( v2 )
  {
    LODWORD(v4) = 4;
    Src = *(_DWORD *)(v2 + 0xC);
    TESForm_PutFormRecordChunkData(0x47494650, &Src, v4);
  }
  LODWORD(v4) = 4;
  return TESForm_PutFormRecordChunkData(0x43504650, this + 2, v4);
}
