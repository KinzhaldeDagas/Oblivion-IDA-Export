bool __thiscall TESForm_MatchGroupRecord(TESForm *this, _DWORD *groupRecord, bool matchAllLevels, bool arg2)
{
  bool result; // al

  result = 0; /*0x46b914*/
  if ( groupRecord ) /*0x46b918*/
  {
    if ( *groupRecord == dword_B05E20 && !groupRecord[3] ) /*0x46b926*/
      return groupRecord[2] == *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08); /*0x46b93f*/
  }
  return result; /*0x46b941*/
}
