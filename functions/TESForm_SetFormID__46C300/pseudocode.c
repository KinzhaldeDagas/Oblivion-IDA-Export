char __thiscall TESForm_SetFormID(TESForm *this, int a2, char a3)
{
  UInt32 refID; // eax

  refID = this->member.refID;
  if ( a2 != refID )
  {
    if ( (this->member.flags & 0x4000) == 0 )
    {
      if ( refID )
        LOBYTE(refID) = NiTMap_RemoveAt(&TESForm_FormIDMap, refID);
      if ( a3 )
      {
        refID = this->member.refID;
        if ( refID )
          LOBYTE(refID) = TESDataHandler_ReleaseFormID((_DWORD *)TESDataHandler, this->member.refID);
      }
      if ( a2 )
        LOBYTE(refID) = NiTMap_SetAt(&TESForm_FormIDMap, a2, (int)this);
    }
    this->member.refID = a2;
  }
  return refID;
}
