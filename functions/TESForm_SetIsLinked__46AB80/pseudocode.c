void __thiscall TESForm_SetIsLinked(TESForm *this, char a2)
{
  if ( a2 ) /*0x46ab85*/
    this->member.flags |= 8u; /*0x46ab87*/
  else
    this->member.flags &= ~8u; /*0x46ab8e*/
}
