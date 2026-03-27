void __thiscall TESForm_SetIsLinked(TESForm *this, char a2)
{
  if ( a2 )
    this->member.flags |= 8u;
  else
    this->member.flags &= ~8u;
}
