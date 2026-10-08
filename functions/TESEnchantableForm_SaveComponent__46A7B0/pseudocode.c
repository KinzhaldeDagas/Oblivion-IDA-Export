void *__thiscall TESEnchantableForm_SaveComponent(_DWORD *this)
{
  int v2; // eax
  void *result; // eax
  _BYTE v4[12]; // [esp-4h] [ebp-Ch] BYREF

  v2 = *(this + 1); /*0x46a7b4*/
  if ( v2 ) /*0x46a7b9*/
  {
    *(_DWORD *)v4 = 4; /*0x46a7be*/
    *(_DWORD *)&v4[8] = *(_DWORD *)(v2 + 0xC); /*0x46a7ca*/
    TESForm_PutFormRecordChunkData(0x4D414E45, &v4[8], *(size_t *)v4); /*0x46a7ce*/
  }
  result = (void *)*((unsigned __int16 *)this + 4); /*0x46a7d6*/
  if ( (_WORD)result ) /*0x46a7de*/
  {
    *(_DWORD *)&v4[4] = 2; /*0x46a7e3*/
    *(_DWORD *)&v4[8] = (unsigned __int16)result; /*0x46a7ef*/
    return TESForm_PutFormRecordChunkData(0x4D414E41, &v4[8], *(size_t *)&v4[4]); /*0x46a7f3*/
  }
  return result; /*0x46a7dd*/
}
