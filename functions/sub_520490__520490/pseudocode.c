void __thiscall sub_520490(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x52049b*/
  {
    sub_56A480((UInt32 *)this + 0xC, this); /*0x5204a1*/
    TESForm_SetIsLinked(this, 1); /*0x5204aa*/
  }
}
