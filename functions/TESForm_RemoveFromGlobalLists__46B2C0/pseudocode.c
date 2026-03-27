UInt32 __thiscall TESForm_RemoveFromGlobalLists(TESForm *this)
{
  UInt32 result; // eax
  UInt32 v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  result = (unsigned int)this->member.flags >> 0xE;
  if ( (this->member.flags & 0x4000) == 0 )
  {
    NiTMap_RemoveAt(&TESForm_FormIDMap, this->member.refID);
    v3 = dword_B06158;
    result = 0;
    if ( dword_B06158 )
    {
      v4 = dword_B06150;
      while ( *(TESForm **)(v4 + 4 * result) != this )
      {
        if ( ++result >= v3 )
          goto LABEL_12;
      }
      if ( result < v3 )
      {
        v5 = *(_DWORD *)(v4 + 4 * result);
        *(_DWORD *)(v4 + 4 * result) = 0;
        if ( v5 )
          --dword_B0615C;
        v6 = dword_B06158 - 1;
        if ( result == v6 )
          dword_B06158 = v6;
      }
    }
LABEL_12:
    if ( TESDataHandler )
      return TESDataHandler_ReleaseFormID((_DWORD *)TESDataHandler, this->member.refID);
  }
  return result;
}
