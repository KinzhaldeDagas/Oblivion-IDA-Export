void __thiscall sub_520490(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    sub_56A480((UInt32 *)this + 0xC, this);
    TESForm_SetIsLinked(this, 1);
  }
}
