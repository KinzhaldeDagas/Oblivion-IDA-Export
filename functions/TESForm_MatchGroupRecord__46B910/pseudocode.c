bool __thiscall TESForm_MatchGroupRecord(TESForm *this, _DWORD *groupRecord, bool matchAllLevels, bool arg2)
{
  bool result; // al

  result = 0;
  if ( groupRecord )
  {
    if ( *groupRecord == dword_B05E20 && !groupRecord[3] )
      return groupRecord[2] == *(_DWORD *)(0xC * (unsigned __int8)this->member.type + 0xB05E08);
  }
  return result;
}
