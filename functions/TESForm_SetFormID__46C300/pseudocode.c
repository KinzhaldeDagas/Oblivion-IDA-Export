char __thiscall TESForm_SetFormID(TESForm *this, int a2, char a3)
{
  UInt32 refID; // eax

  refID = this->member.refID; /*0x46c303*/
  if ( a2 != refID ) /*0x46c30d*/
  {
    if ( (this->member.flags & 0x4000) == 0 ) /*0x46c318*/
    {
      if ( refID ) /*0x46c31c*/
        LOBYTE(refID) = NiTMap_RemoveAt(&TESForm_FormIDMap, refID); /*0x46c324*/
      if ( a3 ) /*0x46c32e*/
      {
        refID = this->member.refID; /*0x46c330*/
        if ( refID ) /*0x46c335*/
          LOBYTE(refID) = TESDataHandler_ReleaseFormID((_DWORD *)g_TESDataHandler, this->member.refID); /*0x46c33e*/
      }
      if ( a2 ) /*0x46c345*/
        LOBYTE(refID) = NiTMap_SetAt(&TESForm_FormIDMap, a2, (int)this); /*0x46c34e*/
    }
    this->member.refID = a2; /*0x46c353*/
  }
  return refID; /*0x46c356*/
}
