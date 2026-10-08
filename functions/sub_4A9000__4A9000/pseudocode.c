void __thiscall sub_4A9000(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x4a900b*/
  {
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x15, this); /*0x4a9011*/
    TESForm_SetIsLinked(this, 1); /*0x4a901a*/
  }
}
