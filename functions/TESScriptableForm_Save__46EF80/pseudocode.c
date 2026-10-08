_DWORD *__thiscall TESScriptableForm_Save(_DWORD *this)
{
  _DWORD *result; // eax
  size_t v2; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v2) = this; /*0x46ef80*/
  result = (_DWORD *)*(this + 1); /*0x46ef81*/
  if ( result ) /*0x46ef86*/
  {
    LODWORD(v2) = 4; /*0x46ef8b*/
    HIDWORD(v2) = result[3]; /*0x46ef97*/
    return TESForm_PutFormRecordChunkData(0x49524353, (char *)&v2 + 4, v2); /*0x46ef9b*/
  }
  return result; /*0x46efa4*/
}
