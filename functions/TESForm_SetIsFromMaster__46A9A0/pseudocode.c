void __thiscall TESForm_SetIsFromMaster(TESForm *this, char a2)
{
  if ( a2 )
    this->member.flags |= kFormFlags_FromMaster;
  else
    this->member.flags &= ~1u;
}
