void __thiscall sub_519500(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x51950b*/
  {
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x38), this); /*0x519511*/
    TESForm_SetIsLinked(this, 1); /*0x51951a*/
  }
}
