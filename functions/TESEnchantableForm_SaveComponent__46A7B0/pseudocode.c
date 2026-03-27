void *__thiscall TESEnchantableForm_SaveComponent(_DWORD *this)
{
  int v2; // eax
  void *result; // eax
  _BYTE v4[12]; // [esp-4h] [ebp-Ch] BYREF

  v2 = *(this + 1);
  if ( v2 )
  {
    *(_DWORD *)v4 = 4;
    *(_DWORD *)&v4[8] = *(_DWORD *)(v2 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E45, &v4[8], *(size_t *)v4);
  }
  result = (void *)*((unsigned __int16 *)this + 4);
  if ( (_WORD)result )
  {
    *(_DWORD *)&v4[4] = 2;
    *(_DWORD *)&v4[8] = (unsigned __int16)result;
    return TESForm_PutFormRecordChunkData(0x4D414E41, &v4[8], *(size_t *)&v4[4]);
  }
  return result;
}
