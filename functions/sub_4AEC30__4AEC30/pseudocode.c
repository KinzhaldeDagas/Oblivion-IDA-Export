void __thiscall sub_4AEC30(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    sub_4AE830(this);
    TESForm_SetIsLinked(this, 1);
  }
}
