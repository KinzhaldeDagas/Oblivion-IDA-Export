void __thiscall TESForm_SetIsFromMaster(TESForm *this, char a2)
{
  if ( a2 ) /*0x46a9a5*/
    this->member.flags |= kFormFlags_FromMaster; /*0x46a9a7*/
  else
    this->member.flags &= ~1u; /*0x46a9ae*/
}
