void __thiscall sub_519500(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x38), this);
    TESForm_SetIsLinked(this, 1);
  }
}
