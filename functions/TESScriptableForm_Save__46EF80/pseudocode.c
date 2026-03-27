_DWORD *__thiscall TESScriptableForm_Save(_DWORD *this)
{
  _DWORD *result; // eax
  size_t v2; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v2) = this;
  result = (_DWORD *)*(this + 1);
  if ( result )
  {
    LODWORD(v2) = 4;
    HIDWORD(v2) = result[3];
    return TESForm_PutFormRecordChunkData(0x49524353, (char *)&v2 + 4, v2);
  }
  return result;
}
