void __thiscall sub_4A9000(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x15, this);
    TESForm_SetIsLinked(this, 1);
  }
}
